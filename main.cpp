//Matthew Martin
//Pizza Shop
//11/25/2024
//Extra: Balenciaga Pizza
#include <iostream>
using namespace std;
int toppings;
int pizzaType;
double total = 0;
double toppingsPrice(int a);
double bill(double a);
int main() {
    cout << "Welcome to Shuzz's Pizza Pluzz" << endl;
    cout << "Small Balenciaga Pizza: $9,999.99" << endl;
    cout << "Large Balenciaga Pizza: $24,999.99" << endl;
    cout << "Price per Balenciaga Topping: $999.99" << endl;
    cout << "Enter 1 for a small pizza and 2 for a large" << endl;
    cin >> pizzaType;
    if (pizzaType == 1) {
        total += 9999.99;
    }
    if (pizzaType == 2) {
        total += 24999.99;
    }
    cout << "How many toppings you want" << endl;
    cin >> toppings;
    total += toppingsPrice(toppings);
    bill(total);
    cout << "Thank you for coming to Shuzz's Pizza Pluzz" << endl;
    return 0;
}
double toppingsPrice(int a) {
    double toppingTotal = 999.99 * a;
    return toppingTotal;
}
double bill(double a) {
    cout << "Your total is $" << a << endl;
    return 0;
}
