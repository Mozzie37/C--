#include <iostream>

//Enter the day (number): 9
//Enter the month (number): 1
//Enter the month (String): January
//Enter the year (number): 2023
//Here are some ways to represent the date:
//1/9/2023
//2023/9/1
//9/1/2023
//January 9, 2023
//9 January 2023
using namespace std;

int main(){
    int day, monthNum, year;
    string monthStr;

    cout << "Enter the day (number): ";
    cin >> day;
    cout << endl << "Enter the month (number)";
    cin >> monthNum;
    cin.ignore(1,'\n');
    cout << endl << "Enter the month (String): ";
    getline(cin, monthStr);
    cout << endl << "Enter the year (number): ";
    cin >> year;
    

    

    

    




    return 0;
}