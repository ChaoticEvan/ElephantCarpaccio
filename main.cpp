#include <iostream>

using namespace std;

int main()
{
    int quantity;
    double cost;

    cout << "Please enter # of items" << endl;
    cin >> quantity;
    cout << "You entered " << quantity << " items" << endl;
    
    cout << "Please enter cost of items" << endl;
    cin >> cost;
    cout << "You entered a cost of " << cost << endl;

    cout << "Total cost: " << cost * quantity << endl;
    return 0;
}