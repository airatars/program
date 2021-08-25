import discord
from discord.ext import commands

import config

#команды .hi
client = commands.Bot(command_prefix = '.')
client.remove_command('help')

#приветствия и т.д.
hi_words = ['привет олег', 'прив олег','hi oleg', 'hello oleg']
qution = ['Как дела, Олег?', 'Че как, Олег', 'Как дела Олег?', 'Как дела Олег', 'Как дела, Олег']
tm = ['Олег сколько время?', 'Олег сколько время', 'Олег, сколько время?', 'Олег, сколько время']
hoo = ['Кто ты, Олег?','Ты кто, Олег?','Кто ты Олег','Ты кто Олег']

@client.command(pass_context = True)
@commands.has_permissions(administrator = True)

async def clear(ctx, amount = 10):
        await ctx.channel.purge(limit = amount)

@client.command(pass_context = True)
@commands.has_permissions(administrator = True)

async def hello(ctx):
        author = ctx.message.author
        await ctx.channel.send(f'Привет, {author}')

@client.event

async def on_ready():
        print('Я тута')


# RUN
client.run(config.TOKEN)