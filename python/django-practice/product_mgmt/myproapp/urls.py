from django.contrib import admin
from django.urls import path,include
from myproapp import views

urlpatterns = [
    path('',views.index),
]
