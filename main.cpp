#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include "userinput.h"
#include "calculator.h"

using namespace std;

int main()
{
    UserInput userInput;
    userInput.collectUserInput();

    Calculator calc;
    double total = calc.calculateTotalCost(userInput.input.quantity, userInput.input.cost, userInput.input.stateCd);
    float roundedTotal = floor(total * 100.0) / 100.0;
    cout << "your total is " << roundedTotal;
    return 0;
}