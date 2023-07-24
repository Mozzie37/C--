#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){
    float amountOwed, APR, monthlyPercentage, minimumPayment;
    cout << "Amount owed: $";
    cin >> amountOwed;
    cout << "APR: ";
    cin >> APR;
    APR = APR / 100;
    monthlyPercentage = APR / 12;
    minimumPayment = amountOwed * APR / 12;
    cout << "Monthly percentage rate: " << monthlyPercentage << endl;
    cout << "Minimum payment: $" << minimumPayment << endl;
    return 0;
}