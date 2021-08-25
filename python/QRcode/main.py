import qrcode

data = "https://vk.com/eren_egga" 

filename = "vk.png"

img = qrcode.make(data)

img.save(filename)