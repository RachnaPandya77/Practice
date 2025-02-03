from django.shortcuts import render,redirect
from .forms import *
from django.contrib.auth import logout
from django.core.mail import send_mail
from finalproject import settings
import random
import requests

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
        username = ""
        if newuser.is_valid():
            #username verify
            try:
                username=newuser.cleaned_data.get('username')
                usersignup.objects.get(username=username)
                print("username already exists")
                msg="username already exists"
            except usersignup.DoesNotExist:
                #OTP sending 
                global otp
                otp=random.randint(111111,999999)
                
                sub ="Your one time password"
                msg=f"Hello User\n\nThanks for registration with us\n\nFor account verification, Your one time password is : {otp}\n\nThanks!\nQuickNotes\nTops Technologies Pvt.Ltd"
                from_email=settings.EMAIL_HOST_USER
                to_email=[request.POST["username"]]


                send_mail(
                        subject=sub,
                        message=msg,
                        from_email=from_email,
                        recipient_list=to_email,
                    )
                #sms OTP
                url = "https://www.fast2sms.com/dev/bulkV2"

                querystring = {
                    "authorization": "Gf0Hrw7gb3vu5WRioPxXYLcKlUOBZtsedyNnJF4pQ8S6ACmTEIOBLEbA05xUJw9XQD6YjGyieIn8dkM7",
                    "variables_values": f"{otp}",
                    "route": "otp",
                    "numbers": "8320085266",
                }
                headers = {"cache-control": "no-cache"}
                response = requests.request(
                    "GET", url, headers=headers, params=querystring
                ) 

                print(response.text)
            newuser.save()
            return redirect("otpverify")
        else:
            print(newuser.errors)
            msg="Error , something went wrong"
    return render(request,'signup.html',{'msg':msg})

def about(request):
    user = request.session.get("user")
    return render(request, "about.html", {"user": user})

def contact(request):
    user = request.session.get("user")
    if request.method == "POST":
        newcontact = contactForm(request.POST)
        if newcontact.is_valid():
            newcontact.save()
            print("Your data has been submitted!")

            # Email Sending Code
            send_mail(
                subject="Thankyou!",
                message=f"Hello User!\n\nThank you for connecting with us!\nWe will contact you.\n\nThanks & Regards!\nRachna Pandya\n+91 8320085266 | workrp@gmail.com",
                from_email=settings.EMAIL_HOST_USER,
                #recipient_list=['ruchipandya20@gmail.com'],
                recipient_list=[request.POST['email']]
            )

        else:
            print(newcontact.errors)
    return render(request, "contact.html", {"user": user})

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

def otpverify(request):
    msg = ""
    global otp
    # print("OTP", otp)
    if request.method == "POST":
        if request.POST["otp"] == str(otp):
            print("Verification done!")
            return redirect("/")
        else:
            print("Error!Invalid OTP")
            msg = "Error!Invalid OTP"
    return render(request, "otpverify.html", {"msg": msg})
