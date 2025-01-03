from django.contrib import admin
from django.urls import path,include
from finalapp import views

urlpatterns = [
    path('',views.index),
]