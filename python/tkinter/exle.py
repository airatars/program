from tkinter import *

root = Tk()
root.geometry('500x500')

def click():
    myLabel = Label(root, text="Hello world!")
    myLabel.pack()

btn = Button(root, text="Click me", command=click)
btn.pack()

root.mainloop()