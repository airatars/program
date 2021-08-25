import requests 
from bs4 import BeautifulSoup

URL = 'https://www.amazon.com/Sony-Mirrorless-Digital-Camera-28-70mm/dp/B00PX8CNCM/ref=sr_1_3?dchild=1&keywords=sony+a7&qid=1627467493&sr=8-3'

headers = {"User-Agent": 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.107 Safari/537.36'}

page = requests.get(URL, headers=headers)

soup = BeautifulSoup(page.content, 'html.parser')

title = soup.find("span", class_="a-size-medium a-color-price priceBlockBuyingPriceString").get_text(strip)

print(title)