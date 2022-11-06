class UserInput
{
private:
    int quantity;
    double cost;
    std::string stateCd;
    void collectQuantity();
    void collectCost();
    void collectStateCd();

public:
    UserInput();
    void collectUserInput();
};