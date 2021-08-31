from tkinter import *
from tkinter import messagebox

root = Tk()
root.title("Калькулятор ИМТ")
root.geometry("500x500")
height = StringVar()
weight = StringVar()

def show_message():
    BMI = float("{0:.2f}".format(weight.get() / ((height.get() / 100) * (height.get() / 100))))

    messagebox.showinfo(f"Ваш текуший ИМТ равен {BMI}")

    if(BMI > 40):
        messagebox.showinfo("Ожирение III степени")
    elif(BMI >= 35):
        messagebox.showinfo("Ожирение II степени")
    elif(BMI >= 30):
        messagebox.showinfo("Ожирение I степени")
    elif(BMI >= 25):
        messagebox.showinfo("Избыточный вес")
    elif(BMI >= 18.5):
        messagebox.showinfo("Нормальный вес")
    else:
        messagebox.showinfo("Недостаточный вес")

h = Label(text="Введите свой рост (см): ")
h.grid(row=0, column=0, padx=70, pady=0 ,sticky="w")

w = Label(text="Введите свой вес (кг): ")
w.grid(row=1, column=0, padx=70, pady=0 ,sticky="w")

height = int(Entry(textvariable=height))
height.grid(row=0, column=1, padx=0, pady=45)

weight = int(Entry(textvariable=weight))
weight.grid(row=1, column=1, padx=0, pady=45)
 
message_button = Button(text="Посчитать", command=show_message)
message_button.place(relx=.5, rely=.5, anchor="c")
 
root.mainloop()