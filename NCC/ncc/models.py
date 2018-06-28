from django.db import models
from django.contrib.auth.models import User

class Players(models.Model):
    p1_name = models.CharField(max_length=200, null=False, blank=False)
    p2_name = models.CharField(max_length=200, null=True, blank=True)
    p1_email = models.EmailField(max_length=200, null=False, blank=False)
    p2_email = models.EmailField(max_length=200, null=True, blank=True)
    p1_phone = models.CharField(max_length=10,null=False, blank=False)
    p2_phone = models.CharField(max_length=10, null=True, blank=True)
    total_score = models.IntegerField(default=0)
    total_time = models.IntegerField(default=0)
    user = models.OneToOneField(User)


class Question(models.Model):
    question_title = models.CharField(max_length=100)
    question_text = models.TextField(max_length=5000, blank=False)

class Qattempt(models.Model):
    question = models.ForeignKey(Question)
    user = models.ForeignKey(User)
    score = models.IntegerField(default=0)
    time = models.IntegerField(default=0)



