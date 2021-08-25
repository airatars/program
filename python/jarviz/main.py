import telebot
import config
import datetime

from telebot import types

bot = telebot.TeleBot(config.TOKEN)

#Массив
name = ['Джарвиз', 'Jarviz', 'Jrvz', 'jrvz', 'jz', 'j']

#Комманды
@bot.message_handler(commands=['help'])
def hlp(message):
    markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
    item1 = types.KeyboardButton("Отправь стикеры)")
    item2 = types.KeyboardButton("😊 Как дела?")
 
    markup.add(item1, item2)

    bot.send_message(message.from_user.id, "Список всех моих возможностей:\n1)Могу немного пообщаться с тобой\n2)Могу отправить стикер\n3)Могу сказать дату и время(/date, /time)".format(message.from_user),
    parse_mode='html', reply_markup=markup)

@bot.message_handler(commands=['time'])
def tm(message):
    now = datetime.datetime.now()
    bot.send_message(message.chat.id, str("Время: ") + str(now.hour) + str(":") + str(now.minute) + str(":") + str(now.second))

@bot.message_handler(commands=['date'])
def dt(message):
    now = datetime.datetime.now()
    bot.send_message(message.chat.id, str("Дата: ") + str(now.day) + str("/") + str(now.month) + str("/") + str(now.year))


#Сообщения
@bot.message_handler(content_types=['text'])
def lalala(message):
    if message.text.lower() == 'привет':
        sti = open("korn.tgs", "rb")
        bot.send_sticker(message.chat.id, sti)
        bot.send_message(message.chat.id, "Здравствуйте, {0.first_name}. Меня зовут Jarviz.\nЯ ваш, не особо умный, персональный ассистент.".format(message.from_user, bot.get_me()), parse_mode='html')
    elif message.text.lower() in name:
        bot.send_message(message.from_user.id, 'Слушаю')
    elif message.text == '😊 Как дела?':
        markup = types.InlineKeyboardMarkup(row_width=2)
        item1 = types.InlineKeyboardButton("Хорошо", callback_data='good')
        item2 = types.InlineKeyboardButton("Не очень", callback_data='bad')
 
        markup.add(item1, item2)
 
        bot.send_message(message.chat.id, 'Отлично, сам как?', reply_markup=markup)
    elif message.text == 'Отправь стикеры)':
        bot.send_message(message.chat.id, 'Вот, держи😁\nhttps://t.me/addstickers/Syimple')
        
    else:
        bot.send_message(message.from_user.id, 'Напиши /help')

@bot.callback_query_handler(func=lambda call: True)
def callback_inline(call):
    try:
        if call.message:
            if call.data == 'good':
                bot.send_message(call.message.chat.id, 'Вот и отличненько 😊')
            elif call.data == 'bad':
                bot.send_message(call.message.chat.id, 'Бывает 😢')
 
            # remove inline buttons
            bot.edit_message_text(chat_id=call.message.chat.id, message_id=call.message.message_id, text="😊 Как дела?",
                reply_markup=None)
 
            # show alert
            bot.answer_callback_query(callback_query_id=call.id, show_alert=False,
                text="ДА")
 
    except Exception as e:
        print(repr(e))

bot.polling(none_stop=True)        