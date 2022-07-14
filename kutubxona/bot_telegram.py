import logging
from aiogram import Bot, Dispatcher, executor, types
import sqlite3, hashlib

from aiogram.contrib.fsm_storage.memory import MemoryStorage
from aiogram.dispatcher import FSMContext
from aiogram.dispatcher.filters.state import State, StatesGroup
from aiogram import types
from aiogram.dispatcher.filters import Text

from aiogram.types import ReplyKeyboardMarkup,\
    ReplyKeyboardMarkup,KeyboardButton, \
    InlineKeyboardMarkup, InlineKeyboardButton

from datetime import date
import asyncio
#from aiogram.methods.set_my_commands import SetMyCommands

API_TOKEN = '5107155257:AAGIbg4H1KSG8mpN8YfKCMDSQOrYnMyRlH0'

storage=MemoryStorage()

# Configure logging
logging.basicConfig(level=logging.INFO)

# Initialize bot and dispatcher
bot = Bot(token=API_TOKEN)
dp = Dispatcher(bot, storage=storage)



global base, cur
base=sqlite3.connect('kitob.db')
cur=base.cursor()
if base:
    base.execute('CREATE TABLE IF NOT EXISTS menu(file_id TEXT, name TEXT, caption TEXT)')
    print('Data base connect OK!')
    base.commit()


class FSMAdmin(StatesGroup):
    files=State()
    
    

class FSMSearch(StatesGroup):
    text=State()


class Moderator(StatesGroup):
    add = State()
    dell = State()

class reklama(StatesGroup):
    xabar = State()
    


'''*****Tugmalar******'''
button_search=KeyboardButton('🔎Qidirish')
button_back=KeyboardButton('🔙Ortga')
button_load=KeyboardButton('📚Yuklash')
button_delete=KeyboardButton('🔙Ortga')
button_book=KeyboardButton('📊Statistika')
button_add = KeyboardButton('➕Admin_qoshish')
button_del = KeyboardButton('➖Admin_ochirish')

btn_ads = KeyboardButton('📤Reklama Tarqatish')

#reklam = ReplyKeyboardMarkup(resize_keyboard=True, one_time_keyboard=True).add(btn_ads)

admin_button= ReplyKeyboardMarkup(resize_keyboard=True, one_time_keyboard=True).row(button_add,button_del).row(button_search,button_book).row(btn_ads,button_delete)
button_user=ReplyKeyboardMarkup(resize_keyboard=True,one_time_keyboard=True).row(button_search,button_back).add(button_book)
button_case_admin=ReplyKeyboardMarkup(resize_keyboard=True).row(button_search,button_book).row(button_load,button_delete)


'''************************Mijoz***************'''
@dp.message_handler(commands=['start'])
async def command_start(message: types.Message):
    if message.from_user.id != 1022567150:
        await bot.send_message(message.from_user.id,'Assalomu Alekum \n@nammtikutubxonabot Botga Xush kelibsiz ',reply_markup=button_user)
        await message.delete()
        users=int(message.from_user.id)
        full_name=str(message.from_user.full_name)
        info = cur.execute('SELECT * FROM user WHERE user_id=?', (users, ))
        if info.fetchone() is None: 
            cur.execute('INSERT INTO user (user_id, full_name) VALUES(?,?)',(f'{users}',f'{full_name}'))
            base.commit()
    else:
        if message.from_user.id == 1022567150:
            global user
            user=message.from_user.id
            await message.answer("@o1bragimov Xush keldingiz!", reply_markup=admin_button)

@dp.message_handler(commands=['qidirish'],state=None)
@dp.message_handler(Text(equals='🔎Qidirish', ignore_case=True))
async def command_search(message: types.Message):
    await FSMSearch.text.set()
    await message.reply("Kitob nomini kiriting!")

@dp.message_handler(state="*", commands='Ortga')
@dp.message_handler(Text(equals='🔙Ortga', ignore_case=True), state="*")
async def cancel_handler(message: types.Message, state: FSMContext):
    current_state=await state.get_state()
    if current_state is None:
        return
    await state.finish()
    await message.reply('Bekor qilindi!')


    
@dp.message_handler(state=FSMSearch.text)
async def load_caption(message: types.Message, state: FSMContext):
        async with state.proxy() as data:
            data['text']=message.text
            search=message.text
            await state.finish()
            sqlite_connec = sqlite3.connect('kitob.db')
            cursor = sqlite_connec.cursor()
            q=int()
            q=0
            for row in cur.execute("SELECT *FROM menu WHERE name LIKE ? ",('%'+f'{search}'+'%',)): #fayl qidirish
                 try:
                        await bot.send_document(message.from_user.id, row[1], message.caption,'📚 Nomi:  '+row[2]+'\n\nKitoblarni topib beradigan bot 👉🏻 @nammtikutubxonabot')
                        q=q+1
                 except Exception as e:
                        await asyncio.sleep(0.01)
            if q==0:
                await message.answer("🛑Uzur bunday nomdagi kitob topilmadi.\n🔁Iltimos qaytaldan kiriting, kitob nomini qisqaroq yozishga uruning.")
                            
                
            await state.finish()


'''************************Moderator***************'''
@dp.message_handler(commands=['moderator'])
async def make_changes_command_command(message: types.Message):
    print(message.from_user.id)
    global ID
    ID=message.from_user.id
    info = cur.execute('SELECT * FROM admin WHERE telegram_id=?', (ID, ))
    if info.fetchone() is None: 
        print('Kechirasiz siz Adminstrator emassiz!')
        await message.reply('Kechirasiz siz Adminstrator emassiz!')
                #Делаем когда нету человека в бд
    else:
        print('Xush kelibsiz!')
                #Делаем когда есть человек в бд
        await bot.send_message(message.from_user.id, 'Admin paneliga Xush kelibsiz!', reply_markup=button_case_admin)
        await message.delete()


@dp.message_handler(commands='📚Yuklash', state=None)
@dp.message_handler(Text(equals='📚Yuklash', ignore_case=True))
async def cm_start(message: types.Message):
    if message.from_user.id == ID:
        await FSMAdmin.files.set()
        await message.reply('📚 Kitobni yuklash')
       

@dp.message_handler(content_types=['document'], state=FSMAdmin.files)
async def load_fayl(message: types.Message, state: FSMContext):
    if message.from_user.id == ID:
        async with state.proxy() as data:
            data['document']=message.document.file_id
            data['name']=message.document.file_name
            await state.finish()
            
            fileid = data['document']
            nam=data['name']

            await state.finish()
            info = cur.execute('SELECT * FROM menu WHERE name=?', (nam, ))
            if info.fetchone() is None: 
                await sql_add_command(fileid,nam)
                await message.reply('Muvaffaqiyatli yuklandi! ☑️')
                #Делаем когда нету человека в бд
            else:
                await message.reply('Kechirasiz bu malumot  yuklangan!⛔️')
                #Делаем когда есть человек в бд

async def sql_add_command(fileid, nam):
        cur.execute('INSERT INTO menu(file_id, name) VALUES(?,?)', (f'{fileid}', f'{nam}')) #faylni qoyish
        base.commit()       
    

'''************************Umumiy***************'''

@dp.message_handler(commands=['statistika'])
@dp.message_handler(Text(equals='📊statistika', ignore_case=True))
async def command_stat(message: types.Message):
    global base, cur
    base=sqlite3.connect('kitob.db')
    cur=base.cursor()
    for row in base.execute('SELECT COUNT(*) FROM menu'):
        a=int(row[0])*4
        b=str(a)
    base.commit()
    global today
    today = date.today()
    today=today.strftime("%d-%m-%Y")
    today =str(today)
       
    for row in base.execute('SELECT COUNT(*) FROM user'):
            await message.answer('🗓 Date: '+f'{today}'+'\n📚 Kitoblar soni: '+ b + ' ta'+'\n👥 Foydalanuvchilar soni: '+ f'{row[0]}'+ ' ta'+'\n\n\nTexnik nosozliklar uchun:\n@o1bragimov murojat qiling ')
            base.commit()
    await message.delete()

@dp.message_handler(commands=['admin', 'help'])
async def command_admin(message: types.Message):
    await message.reply("Texnik nosozliklar uchun:\nhttps://t.me/o1bragimov murojat qiling  ")
    await message.delete()

'''********************************************Admin********************************'''

@dp.message_handler(commands=['➕Admin_qoshish'], state=None)
@dp.message_handler(Text(equals='➕Admin_qoshish', ignore_case=True))
async def enter_item(message: types.Message):
    if message.from_user.id == 1022567150:
        await message.answer('user_id ni kiriting')
        await Moderator.add.set()

@dp.message_handler(state=Moderator.add)
async def enter_volume(message: types.Message, state: FSMContext):
    async with state.proxy() as data:
        data['admin'] = message.text
        admin=data['admin']
        print(admin)
        await state.finish()
    
    info = cur.execute('SELECT * FROM admin WHERE telegram_id=?', (admin,))
    if info.fetchone() is None: 
        cur.execute('INSERT INTO admin(telegram_id) VALUES(?)', (admin,)) 
        base.commit()
        await message.reply('Muvaffaqiyatli qoshildi!')
#                #Делаем когда нету человека в бд
    else:
        await message.reply('Kechirasiz siz Domla bolgansiz!')
#                #Делаем когда есть человек в бд


@dp.message_handler(commands=['➖Admin_ochirish'], state=None)
@dp.message_handler(Text(equals='➖Admin_ochirish', ignore_case=True))
async def enter_item(message: types.Message):
    if message.from_user.id == 1022567150:
        await message.answer('user_id ni kiriting')
        await Moderator.dell.set()

@dp.message_handler(state=Moderator.dell)
async def enter_volume(message: types.Message, state: FSMContext):
    async with state.proxy() as data:
        data['admin'] = message.text
        admin=data['admin']
        await state.finish()
    
        info = cur.execute('SELECT * FROM admin WHERE telegram_id=?', (admin,))
        if info.fetchone() is None:
             await message.reply('Kechirasiz siz Domla bolgansiz!')
#                #Делаем когда нету человека в бд
        else:
            cur.execute('DELETE FROM admin WHERE telegram_id=?', (admin,)) 
            base.commit()
            await message.reply('Admin chiqarib tashlandi!')
           
#                #Делаем когда есть человек в бд


''' *************************** commands ****************************** '''
async def setup_bot_commands(commands):
    bot_commands = [
        types.BotCommand(command="/help", description="Texnik qo'llab-quvvatlash"),
        types.BotCommand(command="/start", description="Botni ishga tushirish"),
        types.BotCommand(command="/statistika", description="Bot statistikasi"),
        types.BotCommand(command="/qidirish", description="Kitob topish"),
        types.BotCommand(command="/moderator", description="Adminlar uchun faqat"),

        ]
    await bot.set_my_commands(bot_commands)

''' *************************** Reklama ************************************** '''

#@dp.message_handler(commands=['reklama'], content_types = 'any')
@dp.message_handler(Text(equals='📤Reklama Tarqatish', ignore_case=True))
async def command_start(message: types.Message):
    if message.from_user.id != 1022567150:
        return       
    else:
        if message.from_user.id == 1022567150:
            await bot.send_message(message.from_user.id,'Reklama uchun yuboriladigan xabar:',reply_markup=button_delete)
            await reklama.xabar.set()
            global rek
            @dp.message_handler(state=reklama.xabar, content_types = 'any')
            async def enter_volume(message: types.Message, state: FSMContext):
                async with state.proxy() as data:
                    rek=message.message_id
                    global base, cur
                    base = sqlite3.connect('kitob.db')
                    cur = base.cursor()
                    for row in base.execute('SELECT * FROM user'):
                        i=0
                        b=0
                        try:
                            await bot.copy_message(chat_id=row[0], from_chat_id=message.from_user.id, message_id=rek)
                            i += 1
                            await asyncio.sleep(0.01)
                        except:
                            b += 1
                            print(f"Reklama {i}- ta foydalanuvchiga yuborildi.\n{b}- ta foydalanuvchi bloklagan")
                    await state.finish()
                    await bot.send_message(chat_id=1022567150,
                                           text=f"Reklama {i}- ta foydalanuvchiga yuborildi.\n{b}- ta foydalanuvchi bloklagan")



            @dp.message_handler(state="*", commands='Ortga')
            @dp.message_handler(Text(equals='🔙Ortga', ignore_case=True), state="*")
            async def cancel_handler(message: types.Message, state: FSMContext):
                current_state=await state.get_state()
                if current_state is None:
                    return
                await state.finish()
                await message.reply('Bekor qilindi!')

@dp.message_handler(commands=['reklama'])
async def delete_messages(message: types.Message):
    i=0
    b=0
    global base, cur
    base = sqlite3.connect('kitob.db')
    cur = base.cursor()
    for row in base.execute('SELECT * FROM user'):
        try:
            chat_member = await bot.get_chat_member(message.chat.id == row[0], message.from_user.id)
            if chat_member.status == "member":
                for entity in message.entities:
                    if entity.type in ["url", "text_link", "mention", "text_mention"]:
                        await bot.delete_message(message.chat.id == row[0], message.message_id)
            i += 1
        except:
            b += 1
        print(f"Reklama {i}- ta foydalanuvchiga yuborildi.\n{b}- ta foydalanuvchi bloklagan")
        await bot.send_message(chat_id=1022567150,
                                text=f"Reklama {i}- ta foydalanuvchiga yuborildi.\n{b}- ta foydalanuvchi bloklagan")

'''global base, cur
base = sqlite3.connect('kitob.db')
cur = base.cursor()'''
'''
for row in base.execute('SELECT * FROM user'):
    @dp.message_handler(func=lambda message: message.entities is not None and message.chat.id == row[0])
    def delete_links(message):
        for entity in message.entities:  # Пройдёмся по всем entities в поисках ссылок
        # url - обычная ссылка, text_link - ссылка, скрытая под текстом
            if entity.type in ["url", "text_link"]:
            # Мы можем не проверять chat.id, он проверяется ещё в хэндлере
                bot.delete_message(message.chat.id==row[0], message.message_id)
            else:
                return
'''

if __name__ == '__main__':
    executor.start_polling(dp, skip_updates=True, on_startup=setup_bot_commands)
