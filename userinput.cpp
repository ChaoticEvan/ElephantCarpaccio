#include <iostream>
#include <string>
#include "userinput.h"

using namespace std;

int quantity;
double cost;
string stateCd;

UserInput::UserInput()
{
    quantity = 0;
    cost = 0.0;
    stateCd = "";
}

/**
 * Driver function to collect all user input
 */
void UserInput::collectUserInput()
{
    this->collectCost();
    this->collectQuantity();
    this->collectStateCd();
}

/**
 * Method to collect quantity of items
 */
void UserInput::collectQuantity()
{
    cout << "Please enter quantity of items" << endl;
    // TODO: Error check input
    cin >> quantity;
    // TODO: Reword this echo line
    cout << "You entered " << quantity << " items" << endl;
    return;
}

/**
 * Method to collect cost of 1 item
 */
void UserInput::collectCost()
{
    cout << "Please enter cost of item" << endl;
    // TODO: Error check input
    cin >> cost;
    // TODO: Reword this echo line
    cout << "You entered " << cost << " for the cost of 1 item" << endl;
    return;
}

/**
 * Method to collect state code for tax percentage
 */
void UserInput::collectStateCd()
{
    cout << "Please enter 2 letter state code" << endl;
    // TODO: Error check input
    cin >> stateCd;
    // TODO: Reword this echo line
    cout << "You entered " << stateCd << " for your state" << endl;
    return;
}