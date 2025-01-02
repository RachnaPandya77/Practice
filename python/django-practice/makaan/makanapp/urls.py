from django.contrib import admin
from django.urls import path,include
from makanapp import views

urlpatterns = [
    path('',views.index),
    path('about/',views.about),
    path('contact/',views.contact),
    path('propertyagent/',views.propertyagent),
    path('propertylist/',views.propertylist),
    path('propertytype/',views.propertytype),
    path('propertyagent/',views.propertyagent),

]