# -*- coding: utf-8 -*-

# A quick introduction to implementing scripts for BDD tests:
#
# This file contains snippets of script code to be executed as the .feature
# file is processed. See the section 'Behaviour Driven Testing' in the 'API
# Reference Manual' chapter of the Squish manual for a comprehensive reference.
#
# The decorators Given/When/Then/Step can be used to associate a script snippet
# with a pattern which is matched against the steps being executed. Optional
# table/multi-line string arguments of the step are passed via a mandatory
# 'context' parameter:
#
#   @When("I enter the text")
#   def whenTextEntered(context):
#      <code here>
#
# The pattern is a plain string without the leading keyword, but a couple of
# placeholders including |any|, |word| and |integer| are supported which can be
# used to extract arbitrary, alphanumeric and integer values resp. from the
# pattern; the extracted values are passed as additional arguments:
#
#   @Then("I get |integer| different names")
#   def namesReceived(context, numNames):
#      <code here>
#
# Instead of using a string with placeholders, a regular expression can be
# specified. In that case, make sure to set the (optional) 'regexp' argument
# to True.

import names


@Given("open the application")
def step(context):
    startApplication("user_identification")


@Given("click add")
def step(context):
    clickButton(waitForObject(names.userIdentification_pushButton_2_QPushButton))


@Then("add login")
def step(context):
    mouseClick(waitForObject(names.addNewUsers_add_login_QLineEdit), 151, 10, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "maxa7777")


@Then("add password")
def step(context):
    mouseClick(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), 44, 9, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "111111111111")


@Then("confirm password")
def step(context):
    mouseClick(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), 38, 5, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "111111111111")


@Then("click add")
def step(context):
    clickButton(waitForObject(names.addNewUsers_add_new_user_QPushButton))


@Then("click ok")
def step(context):
    clickButton(waitForObject(names.o_OK_QPushButton_2))


@Then("add random data to application")
def step(context):
    clickButton(waitForObject(names.userIdentification_pushButton_2_QPushButton))
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "maxa7777")
    mouseClick(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), 13, 5, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "111111111111")
    mouseClick(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), 20, 11, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "111111111111")
    clickButton(waitForObject(names.addNewUsers_add_new_user_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton_2))


@Then("make logging in to application using every randomized data")
def step(context):
    startApplication("user_identification")
    mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 98, 14, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.userIdentification_login_QLineEdit), "maxa7777")
    mouseClick(waitForObject(names.userIdentification_password_QLineEdit), 83, 10, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.userIdentification_password_QLineEdit), "111111111111")
    clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))



@When("input data")
def step(context):
    clickButton(waitForObject(names.userIdentification_pushButton_2_QPushButton))
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "maxa")
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.addNewUsers_add_login_QLineEdit), "<Tab>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_QLineEdit), "<Tab>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    type(waitForObject(names.addNewUsers_pass_for_add_confirm_QLineEdit), "<NumPad1>")
    clickButton(waitForObject(names.addNewUsers_add_new_user_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton_2))

@Then("logging in")
def step(context):
    startApplication("user_identification")
    mouseClick(waitForObject(names.userIdentification_login_QLineEdit), 115, 10, Qt.NoModifier, Qt.LeftButton)
    type(waitForObject(names.userIdentification_login_QLineEdit), "maxa")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "<NumPad1>")
    clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton))

@Then("view users")
def step(context):
    clickButton(waitForObject(names.userIdentification_pushButton_4_QPushButton))
    test.compare(waitForObjectExists(names.tableView_5_0_QModelIndex).row, 5)
    sendEvent("QCloseEvent", waitForObject(names.showUsers_ShowUsers))

@Then("delete users")
def step(context):
    startApplication("user_identification")
    clickButton(waitForObject(names.userIdentification_pushButton_3_QPushButton))
    type(waitForObject(names.removeUser_login_QLineEdit), "maxa")
    type(waitForObject(names.removeUser_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.removeUser_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.removeUser_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.removeUser_login_QLineEdit), "<NumPad7>")
    type(waitForObject(names.removeUser_login_QLineEdit), "<Tab>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    type(waitForObject(names.removeUser_password_QLineEdit), "<NumPad1>")
    clickButton(waitForObject(names.removeUser_pushButton_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton_3))

@Given("view users by another login and password")
def step(context):
    type(waitForObject(names.userIdentification_login_QLineEdit), "maxa1111")
    type(waitForObject(names.userIdentification_login_QLineEdit), "<Tab>")
    type(waitForObject(names.userIdentification_password_QLineEdit), "m11111111111")
    clickButton(waitForObject(names.userIdentification_pushButton_QPushButton))
    clickButton(waitForObject(names.o_OK_QPushButton))
    clickButton(waitForObject(names.userIdentification_pushButton_4_QPushButton))
    test.compare(waitForObjectExists(names.tableView_4_0_QModelIndex).row, 4)
    sendEvent("QCloseEvent", waitForObject(names.showUsers_ShowUsers))
