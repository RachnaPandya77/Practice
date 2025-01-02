from django.shortcuts import render

# Create your views here.

def index(request):
    return render(request,'index.html')

def about(request):
    return render(request,'about.html')

def contact(request):
    return render(request,'contact.html')

def propertyagent(request):
    return render(request,'propertyagent.html')

def propertylist(request):
    return render(request,'propertylist.html')

def propertytype(request):
    return render(request,'propertytype.html')

def testimonial(request):
    return render(request,'testimonial.html')
