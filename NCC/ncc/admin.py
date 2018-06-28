from django.contrib import admin
from ncc.models import Question,Qattempt, User, Players
# Register your models here.
class UserAdmin(admin.ModelAdmin):
    list_display = ('user', 'p1_name', 'p1_email', 'p1_phone', 'total_score', 'total_time')
admin.site.register(Question)
admin.site.register(Qattempt)
admin.site.register(Players, UserAdmin)

