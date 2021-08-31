height = float(input("Введите свой рост (см): "))
weight = float(input("Введите свой вес (кг): "))

BMI = float("{0:.2f}".format(weight / ((height / 100) * (height / 100))))

print(f"Ваш текуший ИМТ равен {BMI}")

if(BMI > 40):
    print("Ожирение III степени")
elif(BMI >= 35):
    print("Ожирение II степени")
elif(BMI >= 30):
    print("Ожирение I степени")
elif(BMI >= 25):
    print("Избыточный вес")
elif(BMI >= 18.5):
    print("Нормальный вес")
else:
    print("Недостаточный вес")