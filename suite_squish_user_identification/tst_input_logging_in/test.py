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

def main():
    #смотрим размер таблицы до внесения данных. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
    
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        startApplication("user_identification")
        clickButton(waitForObject(names.userIdentification_pushButton_2_QPushButton))
        type(waitForObject(names.addNewUsers_add_login_QLineEdit), login)
        type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<Tab>")
        type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), password)
        type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<Tab>")
        type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), password)
        clickButton(waitForObject(names.addNewUsers_add_new_user_QPushButton))
        clickButton(waitForObject(names.o_OK_QPushButton_2))
    
    startApplication("user_identification")
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 101, 12, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_login_QLineEdit), login)
        type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
        type(waitForObject(names.userIdentification_password_QLineEdit), password)
        clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
        clickButton(waitForObject(names.o_OK_QPushButton))
        doubleClick(waitForObject(names.userIdentification_login_QLineEdit), 102, 13, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_login_QLineEdit), "<Del>")
        mouseClick(waitForObject(names.userIdentification_password_QLineEdit), 77, 10, Qt.NoModifier, Qt.LeftButton)
        doubleClick(waitForObject(names.userIdentification_password_QLineEdit), 77, 10, Qt.NoModifier, Qt.LeftButton)
        type(waitForObject(names.userIdentification_password_QLineEdit), "<Del>")
        
    #смотрим размер таблицы после внесения данных. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
    
    #приводим database к дефолтному состоянию.
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
    
        delete_data_from_database(login)
        
    #смотрим размер таблицы после привидения её к дефолтному состоянию. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
        
