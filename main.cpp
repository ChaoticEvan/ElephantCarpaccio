#include <iostream>
#include "userinput.h"

using namespace std;

int main()
{
    // Maybe this could be a statically typed library as opposed to an object
    UserInput userInput;
    userInput.collectUserInput();
    cout << "the drive code can use input " << userInput.input.stateCd;
    return 0;
}