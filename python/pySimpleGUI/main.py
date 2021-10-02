import PySimpleGUI as sg

layout = [
    [sg.Text("Hello")],
    [sg.Button("OK")]
]

window = sg.Window("Demo", layout, margins=(300, 100))

while True:
    event, values = window.read()

    if event == "OK" or event == sg.WINDOW_CLOSED:
        break

window.close()