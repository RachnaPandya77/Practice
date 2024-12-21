from django.contrib import admin
from .models import studinfo

# Register your models here.
class stud_data(admin.ModelAdmin):
    ordering = ['id']
    list_display = ['id','name','city','email','dob','mobile','address']

admin.site.register(studinfo,stud_data)


