import face_recognition
import cv2
import numpy as np

# Загрузка изображения с известным лицом
known_image = face_recognition.load_image_file("known_person.jpg")
known_face_encoding = face_recognition.face_encodings(known_image)[0]

# Инициализация видеозахвата с камеры
video_capture = cv2.VideoCapture(0)

while True:
    # Захват кадра с камеры
    ret, frame = video_capture.read()

    # Преобразование кадра в RGB (библиотека face_recognition работает с RGB)
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    # Нахождение всех лиц в текущем кадре
    face_locations = face_recognition.face_locations(rgb_frame)
    face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)

    # Цикл по всем найденным лицам
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # Сравнение лица с известным лицом
        matches = face_recognition.compare_faces([known_face_encoding], face_encoding)
        name = "Unknown"

        # Если лицо совпадает с известным лицом
        if True in matches:
            name = "Known Person"

        # Рисование прямоугольника вокруг лица
        cv2.rectangle(frame, (left, top), (right, bottom), (0, 255, 0), 2)

        # Добавление текста с именем
        cv2.putText(frame, name, (left, top - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)

    # Отображение результата
    cv2.imshow("Face Recognition", frame)

    # Выход из цикла по нажатию клавиши 'q'
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Освобождение ресурсов
video_capture.release()
cv2.destroyAllWindows()