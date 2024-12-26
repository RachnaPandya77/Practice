from django.shortcuts import render
from .forms import *

# Create your views here.
def index(request):
    if request.method=='POST':
        s=stud(request.POST)
        if s.is_valid():
            s.save()
            print("Data inserted")
        else:
            print(s.errors)
    return render(request,'index.html')

def showdata(request):
    s=studinfo.objects.all()
    return render(request,'showdata.html',{'s':s})
