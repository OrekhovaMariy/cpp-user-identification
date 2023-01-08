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
    print(len(output_data_from_database()))
    
    #вносим в базу данные напрямую.
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        input_data_to_database(login, password)
    
    #смотрим размер таблицы после внесения данных. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
    
    #удаляем часть пользователей с использованием приложения
    for record in testData.dataset("delete_some_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        startApplication("user_identification")
        clickButton(waitForObject(names.userIdentification_pushButton_3_QPushButton))
        type(waitForObject(names.removeUser_login_QLineEdit), login)
        type(waitForObject(names.removeUser_login_QLineEdit), "<Tab>")
        type(waitForObject(names.removeUser_password_QLineEdit), password)
        clickButton(waitForObject(names.removeUser_pushButton_QPushButton))
        test.compare(str(waitForObjectExists(names.o_qt_msgbox_label_QLabel_3).text), "Данные пользователя успешно удалены.")
        clickButton(waitForObject(names.o_OK_QPushButton_3))
       
    #смотрим размер таблицы после внесения изменений. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
    
    #приводим database к дефолтному состоянию, удаляя оставшихся только что внесенных пользователей.
    for record in testData.dataset("removing_all_data.tsv"):
        login = testData.field(record, "login")
    
        delete_data_from_database(login)
        
    #смотрим размер таблицы после привидения её к дефолтному состоянию. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
