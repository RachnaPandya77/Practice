from django.shortcuts import render,redirect
from .forms import *
from django.contrib.auth import logout

# Create your views here.

def index(request):
    msg=""
    if request.method=='POST':
        unm=request.POST['username']
        pas=request.POST['password']
        user=usersignup.objects.filter(username=unm,password=pas)
        if user:
            print("Login successfullly")#if truee
            request.session['user']=unm
            return redirect('notes')
        else:
            print("Error , login fail")
            msg="Error, login fail"
    return render(request,'index.html',{'msg':msg})

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
    user=request.session.get('user')
    return render(request,'notes.html',{'user':user})

def profile(request):
    return render(request,'profile.html')

def userlogout(request):
    logout(request)
    return redirect('/')
