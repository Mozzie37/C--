#include <iostream>
#include <vector>

using std::cout, std:: cin, std::endl, std::vector, std::string;




int main(){
    float penny, nickle, dime, quarter, total, dollar, cents;
    vector<string> coin = {"penny", "nickle", "dime", "quarter"};

    for (int i = 3; i > -1; i--){
        cout << "Number of " << coin[i] << ": ";
        switch (i){
            case 0:
                cin >> penny;
                total += penny * .01;
                break;
            case 1:
                cin >> nickle;
                total += nickle * .05;
                break;
            case 2:
                cin >> dime;
                total += dime * .1;
                break;
            case 3:
                cin >> quarter; 
                total += quarter * .25;
                break;
        }
    }
    dollar = (int) total;
    cents = (total - dollar) * 100;
    cout << endl << "You entered " << quarter << " quarters.";
    cout << endl << "You entered " << dime << " dime.";
    cout << endl << "You entered " << nickle << " nickels.";
    cout << endl << "You entered " << penny << " penny." << endl;
    cout << endl << "Your total is " << dollar << " dollars and " << cents << " cents.";

    return 0;
}