#include <iostream>
using namespace std;

//First number: 20
//Second Number: 7
//Number for Modulo Operation: 5
//20 + 7 = 27. The remainder if divided by 5 is 2.
//20 – 7 = 13. The remainder if divided by 5 is 3.
//20 * 7 = 140. The remainder if divided by 5 is 0.
//20 / 7 = 2 (Approximately). The remainder if divided by 5 is 2.


int main(){
    int num1, num2, num3;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Number for Modulo Operation: ";
    cin >> num3;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "." << " The remainder if divided by " << num3 << " is " << (num1 + num2) % num3 << "." << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "." << " The remainder if divided by " << num3 << " is " << (num1 - num2) % num3 << "." << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "." << " The remainder if divided by " << num3 << " is " << (num1 * num2) % num3 << "." << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << "." << " The remainder if divided by " << num3 << " is " << (num1 / num2) % num3 << "." << endl;
    
 
    return 0;
}