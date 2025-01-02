from django.contrib import admin
from django.urls import path,include
from tapp import views

urlpatterns = [
    path('',views.index),
    path('about/',views.about),
    path('booking/',views.booking),
    path('contact/',views.contact),
    path('destination/',views.destination),
    path('package/',views.package),
    path('service/',views.service),
    path('team/',views.team),
    path('testimonial/',views.testimonial),

]