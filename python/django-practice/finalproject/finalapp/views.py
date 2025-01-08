from django.shortcuts import render,redirect
from .forms import *

# Create your views here.

def index(request):
    return render(request,'index.html')

def signup(request):
    msg=""
    if request.method=='POST':
        newuser=signupform(request.POST)
        if newuser.is_valid():
            newuser.save()
            return redirect('/')
        else:
            print(newuser.errors)
            msg="Error , something went wrong"
    return render(request,'signup.html',{'msg':msg})

def about(request):
    return render(request,'about.html')

def contact(request):
    return render(request,'contact.html')

def notes(request):
    return render(request,'notes.html')

def profile(request):
    return render(request,'profile.html')
