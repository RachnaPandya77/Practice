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
            print("signup done")
            msg="Successfully signup"
            return redirect('/')
        else:
            print(newuser.errors)
            msg="Error"
    return render(request,'signup.html',{'msg':msg})


