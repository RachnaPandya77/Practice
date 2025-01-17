from django.shortcuts import render,redirect
from .forms import *
from django.contrib.auth import logout

# Create your views here.

def index(request):
    msg=""
    user=request.session.get('user')
    if request.method=='POST':
        unm=request.POST['username']
        pas=request.POST['password']

        user=usersignup.objects.filter(username=unm,password=pas)
        userid=usersignup.objects.get(username=unm)
        print("UserID:",userid.id)
        if user:
            print("All good, you're logged in")#if truee
            request.session['user']=unm #session
            request.session['userid']=userid.id
            return redirect('notes')
        else:
            print("Login attempt unsuccessful")
            msg="Login attempt unsuccessful"
    return render(request,'index.html',{'msg':msg, 'user':user})

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
    msg=""
    user=request.session.get('user')
    if request.method=='POST':
        newnote=notesForm(request.POST,request.FILES)
        if newnote.is_valid():
            newnote.save()
            print("Your notes has been submitted!")
            msg="Your notes has been submitted!"
        else:
            print(newnote.errors)
            msg="Error!Something went wrong..."
    return render(request,'notes.html',{'user':user,'msg':msg})

def profile(request):
    user=request.session.get('user')
    userid=request.session.get('userid')
    cid=usersignup.objects.get(id=userid)
    print("Current user ID:",cid)
    if request.method=='POST':
        updateReq=updateForm(request.POST,instance=cid)
        if updateReq.is_valid():
            updateReq.save()
            request.session.delete()
            return redirect('/')
        else:
            print(updateReq.errors)
            msg="Error!Something went wrong...."
    return render(request,'profile.html',{'user':user,'cid':cid})

def userlogout(request):
    logout(request)
    return redirect('/')
