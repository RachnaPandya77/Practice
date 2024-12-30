from django.shortcuts import render,redirect
from .forms import *
from django.contrib.auth import logout

# Create your views here.
def index(request):#login
    msg=""
    if request.method=='POST':
        unm=request.POST['username']
        paas=request.POST['password']

        user=usersignup.objects.filter(username=unm,password=paas)
        if user:
            print("Login Successful")
            msg="Login successfully"
            request.session['user']=unm #session create
            return redirect('home')
        else:
            print("Login failed")
            msg="Login failed"

    return render(request,'index.html',{'msg':msg})

def signup(request):
    msg=""
    if request.method=='POST':
        newuser=signupform(request.POST)
        if newuser.is_valid():
            newuser.save()
            print("signup done")
            msg="Successfully signup"
            return redirect('/')
        else:
            print(newuser.errors)
            msg="Error"
    return render(request,'signup.html',{'msg':msg})

def home(request):
    user=request.session.get('user')
    return render(request,'home.html',{'user':user})

def userlogout(request):
    logout(request)
    return redirect('/')



