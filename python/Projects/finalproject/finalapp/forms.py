from django import forms
from .models import *

class signupform(forms.ModelForm):
    class Meta:
        model=usersignup
        fields='__all__'

class updateForm(forms.ModelForm):
    class Meta:
        model=usersignup
        fields=['firstname','lastname','username','password','state','city','mobile']

class notesForm(forms.ModelForm):
    class Meta:
        model=mynotes
        fields='__all__'

class contactForm(forms.ModelForm):
    class Meta:
        model = contactus
        fields = "__all__" 
    
