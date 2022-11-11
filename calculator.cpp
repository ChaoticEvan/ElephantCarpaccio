#include <string>
#include <iostream>
#include <unordered_map>
#include "calculator.h"

using namespace std;

// CONSTRUCTORS

Calculator::Calculator()
{
    // do nothing
}

// PUBLIC METHODS

double Calculator::calculateTotalCost(int quantity, double cost, string stateCd)
{
    double totalCost = quantity * cost;
    return totalCost * (this->getStateTax(stateCd) / 100 + 1) * (1 - this->getDiscountPercentage(totalCost));
}

// PRIVATE METHODS

double Calculator::getDiscountPercentage(double totalCost)
{
    if (totalCost < DISCOUNT_THRESHOLD_1)
    {
        return 0.0;
    }
    else if (totalCost < DISCOUNT_THRESHOLD_2)
    {
        return DISCOUNT_PERC_1;
    }
    else if (totalCost < DISCOUNT_THRESHOLD_3)
    {
        return DISCOUNT_PERC_2;
    }
    else if (totalCost < DISCOUNT_THRESHOLD_4)
    {
        return DISCOUNT_PERC_3;
    }
    else if (totalCost < DISCOUNT_THRESHOLD_5)
    {
        return DISCOUNT_PERC_4;
    }
    else
    {
        return DISCOUNT_PERC_5;
    }
}

double Calculator::getStateTax(string stateCd)
{
    switch (this->statesTable.at(stateCd))
    {
    case AL:
        return AL_TAX;
    case CA:
        return CA_TAX;
    case NV:
        return NV_TAX;
    case TX:
        return TX_TAX;
    case UT:
        return UT_TAX;
    }
    return -1;
}