from django.shortcuts import render
from django.http import HttpResponse
from models import Players, Qattempt, Question
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.models import User
from NCC.settings import BASE_DIR
from django.db.models import Avg, Max
import os, subprocess
import datetime
import tempfile

start_time = 16* 3600 + 00*60
end_time = 24* 3600 + 55* 60


def time():
    curr = datetime.datetime.now()
    time = (int(curr.hour) * 3600) + (int(curr.minute) * 60) + (int(curr.second))
    if time >= start_time and time < end_time:
        return end_time - time
    elif time < start_time:
        return -1
    elif time >= end_time:
        return 0


def home(request):
    rem = time()
    if rem == -1:
        return render(request, 'aboutus.html')
    else:
        return render(request, 'register_ncc.html')


def log_in(request):
    rem = time()
    if rem == -1 or rem == 0:
        return render(request, 'aboutus.html')
    else:
        if request.method == "POST":
            username = request.POST['team_name']
            password = request.POST['team_pass']
            if User.objects.filter(username = username).exists():
                return render(request, 'register_ncc.html', {'message': 'Username already exists'})
            else:
                user = User.objects.create_user(username = username, password = password)
                p = Players.objects.create(p1_name = request.POST['pname1'], p1_email = request.POST['pemail1'],
                                           p1_phone = request.POST['pphone1'], p2_name = request.POST['pname2'],
                                           p2_email = request.POST['pemail2'], p2_phone = request.POST['pphone2'],
                                           user = user, total_score=0)
                p.save()
                user = authenticate(username = username, password = password)
                if user is not None:
                    login(request, user)
                    request.META['CSRF_COOKIE_USED'] = False
                    if os.path.exists(BASE_DIR + '/judge/user/' + str(user.id)) is False:
                        os.mkdir(BASE_DIR+'/judge/user/'+str(user.id))
                    return render(request, 'questionhub.html', {'all_questions': Question.objects.all(), 'p':p})
                else:
                    return render(request, 'register_ncc.html', {'message': 'Invalid login. Try again'})


def question_hub(request):
    rem = time()
    if rem == -1:
        return render(request, 'aboutus.html')
    elif rem == 0:
        return log_out(request)
    else:
        if request.user.is_authenticated():
            p = Players.objects.get(user = request.user.id)
            return render(request, 'questionhub.html', {'all_questions': Question.objects.all(), 'p':p})
        else:
            return render(request, 'register_ncc.html', {'message': 'User is not authenticated'})


def log_out(request):
    user = User.objects.get(id = request.user.id)
    p = list(Players.objects.order_by('-total_score', 'total_time'))
    avg = []
    max_q = []
    user_q = []
    for i in range(6):
        avg.append(Qattempt.objects.filter(question = Question.objects.get(id = i+1)).aggregate(Avg('score'))['score__avg'])
        if avg[i] == None:
            avg[i] = 0
        max_q.append(Qattempt.objects.filter(question = Question.objects.get(id = i+1)).aggregate(Max('score'))['score__max'])
        if max_q[i] == None:
            max_q[i] = 0
        if Qattempt.objects.filter(question = Question.objects.get(id = i+1), user = user).exists():
            q = Qattempt.objects.get(question = Question.objects.get(id = i+1), user = user)
            user_q.append(q.score)
        else:
             user_q.append(0)
    print avg
    print max_q
    print user_q
    p1 = Players.objects.get(user = user)
    rank = p.index(p1) + 1
    logout(request)
    return render(request, 'result-page.html', {'user':user, 'p':p1, 'rank':rank, 'avg1':avg[0], 'avg2':avg[1], 'avg3':avg[2], 'avg4':avg[3], 'avg5':avg[4], 'avg6':avg[5], 'max1':max_q[0], 'max2':max_q[1], 'max3':max_q[2], 'max4':max_q[3], 'max5':max_q[4], 'max6':max_q[5], 'sc1':user_q[0], 'sc2':user_q[1], 'sc3':user_q[2], 'sc4': user_q[3], 'sc5': user_q[4], 'sc6': user_q[5]})
    #else:
     #   return render(request, 'register_ncc.html', {'message':'User is not authenticated'})


def detail(request, question_id):
    rem = time()
    if rem == -1:
        return render(request, 'aboutus.html')
    elif rem == 0:
        return log_out(request)
    else:
        if request.user.is_authenticated():
            p = Players.objects.get(user=request.user.id)
            if os.path.exists(BASE_DIR + '/judge/user/' + str(request.user.id) + '/' + str(question_id)) is False:
                os.mkdir(BASE_DIR + '/judge/user/' + str(request.user.id) + '/' + str(question_id))
            return render(request, 'questions_ncc.html', {'question': Question.objects.get(id=question_id), 'p':p})
        else:
            return render(request, 'register_ncc.html', {'message': 'User is not authenticated'})


def submit(request, question_id):
    rem = time()
    if rem == -1:
        return render(request, 'aboutus.html')
    elif rem == 0:
        return log_out(request)
    else:
        if request.user.is_authenticated():
            lang = request.POST['Language']
            buff = request.POST['load']
            loc = BASE_DIR + '/judge/user/' + str(request.user.id) + '/' + str(question_id) + '/' + str(request.user.id) + '_' + str(question_id) + lang
            if buff == "loadbuffer":
                if os.path.exists(loc):
                    file = open(loc, 'r')
                    fileread = file.read()
                    file.close()
                    return HttpResponse(fileread)
            elif buff == "save":
                try:
                    file_text = request.FILES['cfile'].read()
                except:
                    file_text = request.POST['tbox']
                f = open(loc, 'wb+')
                f.write(file_text)
                f.close()
                return HttpResponse("Code saved!")
            else:
                try:
                    file_text = request.FILES['cfile'].read()
                except:
                    file_text = request.POST['tbox']
                f = open(loc, 'wb+')
                f.write(file_text)
                f.close()
                if Qattempt.objects.filter(question=Question.objects.get(id=question_id), user=User.objects.get(id=request.user.id)).exists():
                    q = Qattempt.objects.get(question=Question.objects.get(id=question_id), user=User.objects.get(id=request.user.id))
                else:
                    q = Qattempt.objects.create(question=Question.objects.get(id=question_id), user=User.objects.get(id=request.user.id), score=0, time=0)
                p = Players.objects.get(user = User.objects.get(id=request.user.id))
                cmd = ['python', BASE_DIR + '/judge/main.py', str(request.user.id) + '_' + str(question_id) + lang]
                res = terminalfunc(cmd, loc)
                if "-9999" in res:
                    f = open(BASE_DIR + '/judge/error/' + str(request.user.id) + '/' + str(request.user.id) + '_' + str(question_id) + '.txt')
                    error_text = f.read()
                    f.close()
                    return render(request, 'testcases.html', {'message':error_text, 'out1':'C', 'out2':'C', 'out3':'C', 'out4':'C', 'out5':'C', 'p':p, 'yes':1})
                elif "7" in res:
                   return render(request, 'testcases.html', {'out1':'A', 'out2':'A', 'out3':'A', 'out4':'A', 'out5':'A', 'p':p})
                else:
                    now1 = datetime.datetime.now()
                    timenow = (int(now1.hour) * 3600) + (int(now1.minute) * 60) + (int(now1.second))
                    rtime = timenow - start_time
                    sc = res.count('1') *20
                    if q.score < sc:
                        p.total_score = p.total_score - q.score + sc
                        q.score = sc
                        p.total_time = p.total_time - q.time + rtime
                        q.time = rtime
                q.save()
                p.save()
                res = res.replace('1','R')
                res = res.replace('-99','W')
                res = res.replace('5','T')
                res = res.replace(' ','')
                return render(request, 'testcases.html', {'out1':res[1], 'out2':res[3], 'out3':res[5], 'out4':res[7], 'out5':res[9], 'p':p})
        else:
            return render(request, 'register_ncc.html')


def leaderboard(request):
    rem = time()
    if rem == -1:
        return render(request, 'aboutus.html')
    elif rem == 0:
        return log_out(request)
    else:
        if request.user.is_authenticated():
            p = Players.objects.get(user = User.objects.get(id = request.user.id))
            return render(request, 'leaderboard_final.html', {'all': Players.objects.order_by('-total_score', 'total_time'),'player': Players.objects.get(user=request.user.id),'user': User.objects.get(id = request.user.id), 'p':p})
        else:
            return render(request, 'register_ncc.html', {'message': 'User is not authenticated'})

def terminalfunc(cmd, loc):
    with tempfile.TemporaryFile() as tempf:
        output = subprocess.Popen(cmd, stdout=tempf, stderr=tempf, stdin=tempf)
        output.wait()
        tempf.seek(0)
        res = tempf.read()
    res = res.replace(loc, '')
    res = res.replace("\n", "")
    return res



def adminpage(request):
    return render(request, 'login.html')


def admin_login(request):
    if request.method == "POST":
        username = request.POST['username']
        password = request.POST['password']
        admin_pass = request.POST['admin_pass']
        user = authenticate(username = username, password = password)
        if admin_pass == 'admin123':
            if user is not None:
                login(request, user)
                p = Players.objects.get(user=request.user.id)
                return render(request, 'questionhub.html', {'all_questions': Question.objects.all(), 'p':p})
            else:
                return render(request, 'login.html', {'message':'Invalid username or password'})
        else:
            return render(request, 'login.html', {'message':'Invalid admin password'})
    else:
        logout(request,user)
        return render(request, 'login.html')


