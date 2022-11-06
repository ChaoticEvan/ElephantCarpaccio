#include "input.h"

class UserInput
{
private:
    void collectQuantity();
    void collectCost();
    void collectStateCd();

public:
    UserInput();
    Input input;
    void collectUserInput();
};