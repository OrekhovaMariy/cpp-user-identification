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
    #создаем массив, который будет хранить данные, взятые из базы напрямую
    list_users = output_data_from_database()
    
    #вносим в базу данные напрямую.
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
        password = testData.field(record, "password")
    
        input_data_to_database(login, password)
        #добавим в массив данные, которые добавляем в базу
        list_users.append((login, password))
    
    #смотрим размер таблицы после внесения данных. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
    new_size = len(output_data_from_database())
        
    startApplication("user_identification")
    mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 38, 13, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.userIdentification_login_QLineEdit), "maxa1111")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "m11111111111")
    clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
    test.compare(str(waitForObjectExists(names.o_qt_msgbox_label_QLabel_2).text), "Идентификация прошла успешно")
    clickButton(waitForObject(names.o_OK_QPushButton))
    clickButton(waitForObject(names.userIdentification_pushButton_4_QPushButton))
    
    #сравниваем количество элементов в отображаемой в приложении таблице с количеством пользователей в базе
    header = waitForObject(names.tableView_QHeaderView)
    test.compare(header.count(), new_size)
    
    #сравниваем каждый элемент, который отображается в таблице с данными, которые мы взяли из базы напрямую
    table = waitForObject(names.showUsers_tableView_QTableView)
    model = table.model()
    columnCount = model.columnCount()
    rowCount = model.rowCount()
    
    for col in range(columnCount):
        for row in range(rowCount):
            itemText = str(model.data(model.index(row, col), Qt.DisplayRole).toString())
            test.verify(itemText == list_users[row][col])
    
    sendEvent("QCloseEvent", waitForObject(names.showUsers_ShowUsers))
    
    #приводим database к дефолтному состоянию.
    for record in testData.dataset("adding_data.tsv"):
        login = testData.field(record, "login")
    
        delete_data_from_database(login)
        
    #смотрим размер таблицы после приведения её к дефолтному состоянию. Информация выводится в Runner/Server Log
    print(len(output_data_from_database()))
