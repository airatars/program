import tkinter as tk
from tkinter import *
import qrcode

app = tk.Tk()
app.title("Создать QR-код")
app.geometry('500x500')

def click():
    img = qrcode.make(data.get())
    img.save(filename.get()+ ".png")

data = StringVar()
filename = StringVar()

label = tk.Label(app, text="Ссылка на сайт:")
label.place(relx=.8/3, rely=.1, anchor="c")

input = Entry(app, textvariable=data)
input.place(relx=.5, rely=.1, anchor="c")

label = tk.Label(app, text="Название файла:")
label.place(relx=.8/3, rely=.2, anchor="c")

input = Entry(app, textvariable=filename)
input.place(relx=.5, rely=.2, anchor="c")

btn = Button(text="Создать QR-код",
            command=click)
btn.place(relx=.5, rely=.3, anchor="c")

app.mainloop()