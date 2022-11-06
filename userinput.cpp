#include <iostream>
#include <string>
#include "userinput.h"

using namespace std;

// CONSTRUCTORS

/**
 * Construct a UserInput object and setup default values for struct
 */
UserInput::UserInput()
{
    input.quantity = 0;
    input.cost = 0.0;
    input.stateCd = "";
}

// PUBLIC METHODS

/**
 * Driver function to collect all user input
 */
void UserInput::collectUserInput()
{
    this->collectQuantity();
    this->collectCost();
    this->collectStateCd();
}

// PRIVATE METHODS

/**
 * Method to collect quantity of items
 */
void UserInput::collectQuantity()
{
    cout << "Please enter quantity of items" << endl;

    // TODO: Turn error checking into a method to avoid code duplication, if possible
    // Maybe pass variable storage address, then `cin >> addrOfVar`. Do addreses check var type?
    if (!(cin >> input.quantity))
    {
        std::cerr << "ERROR: Value you entered for item quantity could not be converted to an int" << endl;
    }
    cout << "You entered " << input.quantity << " items" << endl;
    return;
}

/**
 * Method to collect cost of 1 item
 */
void UserInput::collectCost()
{
    cout << "Please enter cost of item" << endl;
    if (!(cin >> input.cost))
    {
        std::cerr << "ERROR: Value you entered for cost of 1 item could not be converted to a double" << endl;
    }
    cout << "You entered " << input.cost << " for the cost of 1 item" << endl;
    return;
}

/**
 * Method to collect state code for tax percentage
 */
void UserInput::collectStateCd()
{
    cout << "Please enter 2 letter state code" << endl;
    if (!(cin >> input.stateCd))
    {
        std::cerr << "ERROR: Value you entered for 2 letter state code not be converted to a string" << endl;
    }
    cout << "You entered " << input.stateCd << " for your state" << endl;
    return;
}