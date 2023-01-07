# encoding: UTF-8

from objectmaphelper import *

userIdentification_UserIdentification = {"name": "UserIdentification", "type": "UserIdentification", "visible": 1}
userIdentification_login_QLineEdit = {"name": "login", "type": "QLineEdit", "visible": 1, "window": userIdentification_UserIdentification}
userIdentification_password_QLineEdit = {"name": "password", "type": "QLineEdit", "visible": 1, "window": userIdentification_UserIdentification}
userIdentification_pushButton_QPushButton = {"name": "pushButton", "type": "QPushButton", "visible": 1, "window": userIdentification_UserIdentification}
o_QMessageBox = {"type": "QMessageBox", "unnamed": 1, "visible": 1, "windowTitle": "Идентификация пользователя"}
o_OK_QPushButton = {"text": "OK", "type": "QPushButton", "unnamed": 1, "visible": 1, "window": o_QMessageBox}
userIdentification_pushButton_4_QPushButton = {"name": "pushButton_4", "type": "QPushButton", "visible": 1, "window": userIdentification_UserIdentification}
showUsers_ShowUsers = {"name": "ShowUsers", "type": "ShowUsers", "visible": 1}
userIdentification_pushButton_2_QPushButton = {"name": "pushButton_2", "type": "QPushButton", "visible": 1, "window": userIdentification_UserIdentification}
addNewUsers_AddNewUsers = {"name": "AddNewUsers", "type": "AddNewUsers", "visible": 1}
addNewUsers_add_login_QLineEdit = {"name": "add_login", "type": "QLineEdit", "visible": 1, "window": addNewUsers_AddNewUsers}
addNewUsers_pass_for_add_QLineEdit = {"name": "pass_for_add", "type": "QLineEdit", "visible": 1, "window": addNewUsers_AddNewUsers}
addNewUsers_pass_for_add_confirm_QLineEdit = {"name": "pass_for_add_confirm", "type": "QLineEdit", "visible": 1, "window": addNewUsers_AddNewUsers}
addNewUsers_add_new_user_QPushButton = {"name": "add_new_user", "type": "QPushButton", "visible": 1, "window": addNewUsers_AddNewUsers}
o_QMessageBox_2 = {"type": "QMessageBox", "unnamed": 1, "visible": 1, "windowTitle": "Добавление пользователя"}
o_OK_QPushButton_2 = {"text": "OK", "type": "QPushButton", "unnamed": 1, "visible": 1, "window": o_QMessageBox_2}
userIdentification_pushButton_3_QPushButton = {"name": "pushButton_3", "type": "QPushButton", "visible": 1, "window": userIdentification_UserIdentification}
removeUser_RemoveUser = {"name": "RemoveUser", "type": "RemoveUser", "visible": 1}
removeUser_login_QLineEdit = {"name": "login", "type": "QLineEdit", "visible": 1, "window": removeUser_RemoveUser}
removeUser_password_QLineEdit = {"name": "password", "type": "QLineEdit", "visible": 1, "window": removeUser_RemoveUser}
removeUser_pushButton_QPushButton = {"name": "pushButton", "type": "QPushButton", "visible": 1, "window": removeUser_RemoveUser}
o_QMessageBox_3 = {"type": "QMessageBox", "unnamed": 1, "visible": 1, "windowTitle": "Удаление пользователя"}
o_OK_QPushButton_3 = {"text": "OK", "type": "QPushButton", "unnamed": 1, "visible": 1, "window": o_QMessageBox_3}
o_QWidgetLineControl = {"occurrence": 3, "type": "QWidgetLineControl", "unnamed": 1}
o_QWidgetLineControl_2 = {"occurrence": 4, "type": "QWidgetLineControl", "unnamed": 1}
o_QWidgetLineControl_3 = {"occurrence": 5, "type": "QWidgetLineControl", "unnamed": 1}
showUsers_tableView_QTableView = {"name": "tableView", "type": "QTableView", "visible": 1, "window": showUsers_ShowUsers}
tableView_QHeaderView = {"container": showUsers_tableView_QTableView, "orientation": 2, "type": "QHeaderView", "unnamed": 1, "visible": 1}
o5_HeaderViewItem = {"container": tableView_QHeaderView, "text": 5, "type": "HeaderViewItem", "visible": True}
tableView_5_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 5, "type": "QModelIndex"}
tableView_5_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 5, "type": "QModelIndex"}
tableView_4_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 4, "type": "QModelIndex"}
tableView_4_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 4, "type": "QModelIndex"}
tableView_3_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 3, "type": "QModelIndex"}
tableView_3_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 3, "type": "QModelIndex"}
tableView_2_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 2, "type": "QModelIndex"}
tableView_2_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 2, "type": "QModelIndex"}
tableView_1_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 1, "type": "QModelIndex"}
tableView_1_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 1, "type": "QModelIndex"}
tableView_0_1_QModelIndex = {"column": 1, "container": showUsers_tableView_QTableView, "row": 0, "type": "QModelIndex"}
tableView_0_0_QModelIndex = {"column": 0, "container": showUsers_tableView_QTableView, "row": 0, "type": "QModelIndex"}
o7_HeaderViewItem = {"container": tableView_QHeaderView, "text": 7, "type": "HeaderViewItem", "visible": True}
