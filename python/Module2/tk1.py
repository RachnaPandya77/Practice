import tkinter

tk = tkinter.Tk()
tk.title('MyApp')
tk.geometry("400x500")
tk.config(bg='skyblue')

f_lebal = tkinter.Label(tk,text='Name',bg='blue',fg='blue',font='consolas 15 bold').pack()
f_lebal.grid(row=0,column=0,sticky='w')

ftxt=tkinter.Entry()
ftxt.grid(row=0,column=1,sticky='w')





tk.mainloop()