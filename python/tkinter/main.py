import tkinter as tk
from tkinter import *
from tkinter import ttk
from tkinter.messagebox import showinfo

window = tk.Tk()
window.title("Выпадающее меню")

var = tk.StringVar(window)
var.set("Фрукты")

dropdown = tk.OptionMenu(window, var, "Яблоко", "Груша", "Банан")
dropdown.pack()

window.title("Покупка фруктов")
window.geometry('500x500')

window.mainloop()