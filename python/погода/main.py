import eel
import pyowm

owm = pyowm.OWM("465636d1a8ad71aff0caa62369c08199")

@eel.expose
def get_weather(place):
    mgr = owm.weather_manager()

    observation = mgr.weather_at_place(city)
    w = observation.weather

    temp = w.temperature('celsius')['temp']

    return "В городе " + city +  " сейчас " + str(temp) + " градусов!"

#eel.init("web")
eel.start("D:\program\python\погода\web\main.html", size=(700, 700))