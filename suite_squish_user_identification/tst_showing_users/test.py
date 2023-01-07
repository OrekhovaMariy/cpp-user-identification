# -*- coding: utf-8 -*-

import names
import sqlite3

def output_data_from_database():
    base = sqlite3.connect('/home/mary/DatabaseLogin.db')
    cur = base.cursor()
    r = cur.execute('SELECT * FROM users').fetchall()
    return r

def delete_data_from_database(user_login):
    base = sqlite3.connect('/home/mary/DatabaseLogin.db')
    cur = base.cursor()
    cur.execute('DELETE FROM users WHERE login == ?', (user_login,))
    base.commit()
    
def input_data_to_database(user_login, user_password):
    base = sqlite3.connect('/home/mary/DatabaseLogin.db')
    cur = base.cursor()
    cur.execute('INSERT INTO users VALUES(?, ?)', (user_login, user_password))
    base.commit()


def main():
    #смотрим размер таблицы до внесения данных. Информация выводится в Runner/Server Log
    s = len(output_data_from_database())
    print(s)
    
    #Если количество данных в таблице меньше, чем необходимо для проведения теста, то вносим недостающие данные
    while s < 7:
        input_data_to_database('mary7777', '111111111111')
        s = s + 1
    
    startApplication("user_identification")
    mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 38, 13, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.userIdentification_login_QLineEdit), "maxa1111")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "m11111111111")
    clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton))
    clickButton(waitForObject(names.userIdentification_pushButton_4_QPushButton))
    mouseClick(waitForObject(names.o7_HeaderViewItem), 6, 12, Qt.NoModifier, Qt.LeftButton)
    test.compare(waitForObjectExists(names.o7_HeaderViewItem).text, "7")
    sendEvent("QCloseEvent", waitForObject(names.showUsers_ShowUsers))
    
    #приводим базу к дефолтному состоянию
    delete_data_from_database('mary7777')
        
    #смотрим размер таблицы после привидения её к дефолтному состоянию. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))    
