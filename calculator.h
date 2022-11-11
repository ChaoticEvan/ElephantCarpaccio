#include <string>
#include <iostream>
#include <unordered_map>

class Calculator
{
private:
    // CONSTANTS
    double const AL_TAX = 4.0;
    double const CA_TAX = 18.25;
    double const NV_TAX = 8.0;
    double const TX_TAX = 6.25;
    double const UT_TAX = 6.85;

    double const DISCOUNT_PERC_1 = 0.03;
    double const DISCOUNT_PERC_2 = 0.05;
    double const DISCOUNT_PERC_3 = 0.07;
    double const DISCOUNT_PERC_4 = 0.1;
    double const DISCOUNT_PERC_5 = 0.15;

    int const DISCOUNT_THRESHOLD_1 = 1000;
    int const DISCOUNT_THRESHOLD_2 = 5000;
    int const DISCOUNT_THRESHOLD_3 = 7000;
    int const DISCOUNT_THRESHOLD_4 = 10000;
    int const DISCOUNT_THRESHOLD_5 = 50000;

    enum states
    {
        AL,
        CA,
        NV,
        TX,
        UT
    };

    std::unordered_map<std::string, states> const statesTable = {{"AL", states::AL}, {"CA", states::CA}, {"NV", states::NV}, {"TX", states::TX}, {"UT", states::UT}};
    double getDiscountPercentage(double cost);
    double getStateTax(std::string stateCd);

public:
    Calculator();
    double calculateTotalCost(int quantity, double cost, std::string stateCd);
};