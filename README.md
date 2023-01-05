# cpp-user-identification
Идентификация пользователя

Приложение по идентификации пользователя написано на C++ с использованием Qt 5.15.2 для ОП Ubuntu. Проект можно запустить через QtCreator.
Данные о новых пользователях вносятся в sqlite файл DatabaseLogin.db в таблицу users, данный файл размещается на локальном компьютере. 

Функционал приложения:
1. Идентификация пользователя при входе в систему. Если пользователя нет в базе, отображается предупреждение о неправильно введенных данных.

2. Добавление пользователя. Добавление происходит без предварительной идентификации. Необходимо, чтобы логин и пароль соответствовали требованиям по количеству символов (логин не менее 8, пароль не менее 12 символов). При добавлении пользователя можно использовать Aa-Zz, 0-9 и спецсимволы исключая пробел. Если логин пользователя уже имеется в базе, то отображается предупреждение о том, что такой пользователь уже есть, необходимо повторить попытку.

3. Удаление пользователя. Удаление происходит без предварительной идентификации. Если логин и пароль удаляемого пользователя внесены неверно, то отображается предупреждение о том, что удаление произвести невозможно.

4. Просмотр списка пользователей. Просмотр происходит после успешной авторизации.

Тесты еще не написаны. 
Также планируется создание автотеста на Python 2.7 (или 3) для проверки работоспособности приложения.
