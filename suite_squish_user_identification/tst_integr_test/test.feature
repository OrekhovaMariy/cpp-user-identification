# This is a sample .feature file
# Squish feature files use the Gherkin language for describing features, a short example
# is given below. You can find a more extensive introduction to the Gherkin format at
# https://cucumber.io/docs/gherkin/reference/
Feature: Checking of input, logging in, viewing and removing users


    Scenario: Checking of input, logging in, viewing and removing users

        Given open the application
         When input data
         Then logging in
          And view users
          And delete users


