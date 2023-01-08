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
    
    #залогиниваем только что внесенных пользователей.
    startApplication("user_identification")
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 101, 12, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_login_QLineEdit), login)
        type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
        type(waitForObject(names.userIdentification_password_QLineEdit), password)
        clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
        test.compare(str(waitForObjectExists(names.o_qt_msgbox_label_QLabel_2).text), "Идентификация прошла успешно")
        clickButton(waitForObject(names.o_OK_QPushButton))
        doubleClick(waitForObject(names.userIdentification_login_QLineEdit), 102, 13, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_login_QLineEdit), "<Del>")
        mouseClick(waitForObject(names.userIdentification_password_QLineEdit), 77, 10, Qt.NoModifier, Qt.LeftButton)
        doubleClick(waitForObject(names.userIdentification_password_QLineEdit), 77, 10, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_password_QLineEdit), "<Del>")
    
    #приводим database к дефолтному состоянию.
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
    
        delete_data_from_database(login)
        
    #смотрим размер таблицы после привидения её к дефолтному состоянию. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
