#include <iostream>

using namespace std;

int main(){
    string item1;
    string item2;
    int quantity1;
    int quantity2;
    float cost1;
    float cost2;
    float total;
    cout << "What're you buying? ";
    getline(cin, item1);
    cout << endl << "How many? ";
    cin >> quantity1;
    cout << endl << "What do they cost? ";
    cin >> cost1;
    cin.ignore(1,'\n');
    cout << endl << "What else're you buying? ";
    getline (cin, item2);
    cout << endl << "How many? ";
    cin >> quantity2;
    cout << endl << "What do they cost? ";
    cin >> cost2;
    cout << endl;


    cout << "Your list:\n----\n" << item1 << "(" << quantity1 << ")" << endl << "$" << cost1 << " (" << cost1 * quantity1 << " total)" << "\n\n"; 
    cout << item2 << "(" << quantity2 << ")" << endl << "$" << cost2 << " (" << cost2 * quantity2 << " total)" << "\n\n";
    cout << "Total cost: " <<(quantity1 * cost1) + (quantity2 * cost2) << "\n----"; 


    return 0;
}