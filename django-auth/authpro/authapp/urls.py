from django.contrib import admin
from django.urls import path,include
from authapp import views

urlpatterns = [
    path('',views.index),
    path('signup/',views.signup),
]