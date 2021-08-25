import requests
from bs4 import BeautifulSoup as BS

r= requests.get("https://news.ru/")
html = BS(r.content, 'html.parser')

for el in html.select(".col-md-4 > .news"):
    title = el.select('.time > a')
    print( title[0].text )