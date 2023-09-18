#include <iostream>

using std::cout, std::cin;



int main(){
    int arraySize = 10;
    int input;
    int target;
    int* array = new int[arraySize];
    cout << "Please enter 10 numbers:\n";
    for(int i = 0; i < arraySize; i++){
        cout << "Integer " << i + 1 << ": ";
        cin >> input;
        array[i] = input;
    }
    cout << "\nWhat is the target number: ";
    cin >> target;
    bool found = false;
    for(int i = 0; i <= arraySize; i++){
        if(target == array[i]){
            found == true;
            break;
        }
    }
    cout << "\n";
    if(found){
        cout << "The target is in the set";
    }
    else{
        cout << "The target is not in the set";
    }


    return 0;
}