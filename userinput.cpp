#include <iostream>
#include <string>
#include "userinput.h"

using namespace std;

/**
 * Construct a UserInput object and setup default values for struct
 */
UserInput::UserInput()
{
    input.quantity = 0;
    input.cost = 0.0;
    input.stateCd = "";
}

/**
 * Driver function to collect all user input
 */
void UserInput::collectUserInput()
{
    this->collectQuantity();
    this->collectCost();
    this->collectStateCd();
}

/**
 * Method to collect quantity of items
 */
void UserInput::collectQuantity()
{
    cout << "Please enter quantity of items" << endl;
    // TODO: Error check input
    cin >> input.quantity;
    // TODO: Reword this echo line
    cout << "You entered " << input.quantity << " items" << endl;
    return;
}

/**
 * Method to collect cost of 1 item
 */
void UserInput::collectCost()
{
    cout << "Please enter cost of item" << endl;
    // TODO: Error check input
    cin >> input.cost;
    // TODO: Reword this echo line
    cout << "You entered " << input.cost << " for the cost of 1 item" << endl;
    return;
}

/**
 * Method to collect state code for tax percentage
 */
void UserInput::collectStateCd()
{
    cout << "Please enter 2 letter state code" << endl;
    // TODO: Error check input
    cin >> input.stateCd;
    // TODO: Reword this echo line
    cout << "You entered " << input.stateCd << " for your state" << endl;
    return;
}