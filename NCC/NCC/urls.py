"""NCC URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/1.8/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  url(r'^$', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  url(r'^$', Home.as_view(), name='home')
Including another URLconf
    1. Add an import:  from blog import urls as blog_urls
    2. Add a URL to urlpatterns:  url(r'^blog/', include(blog_urls))
"""
from django.conf.urls import include, url
from django.contrib import admin
from ncc import views

urlpatterns = [
    url(r'^admin/', include(admin.site.urls)),
    url(r'^$', views.home),
    url(r'^submit$', views.log_in),
    url(r'^logout$', views.log_out),
    url(r'^(?P<question_id>[0-6])$',views.detail),
    url(r'^questions$',views.question_hub),
    url(r'^(?P<question_id>[0-7])/save$',views.submit),
    url(r'^leaderboard',views.leaderboard),
    url(r'^user$', views.adminpage),
    url(r'^login$', views.admin_login),
]
