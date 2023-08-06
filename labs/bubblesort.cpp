#include <iostream>

using std::cin, std::cout;



int main(){

    //getting the main array from inputs
    
    int input, arraySize, target;
    arraySize = 11;
    int* array = new int[arraySize];
    for(int i = 0; i < arraySize; i++){
        cout << "Integer " << i + 1 << ": ";
        cin >> input;
        array[i] = input;
    }

    // bubble sort
    for(int i = 0; i < arraySize - 1; i++){
        for(int j = 0; j < arraySize - i - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array [j + 1];
                array[j+1] = temp;
            }
        }
    }
    cout <<"\nWhat is the target number: ";
    cin >> target;


    //printing the sorted list
    cout << "\nSorted list: ";
    for(int i = 0; i < arraySize; i++){
        cout << array[i] << " ";
    }
    //binary search
    int low = 0, mid = 0, high = arraySize-1;
    bool found = false;
    while(high>=low){
        mid = (low + high) / 2;
        cout << "\n\nLow is " << low;
        cout << "\n\nHigh is " << high;
        cout << "\n\nMid is " << mid;
        cout << "\n\nSearching";
        if (target < array[mid]){
            high = mid - 1;
        }
        else if(target == array[mid]){
            found = true;
            break;
        }
        else{
            low = mid + 1;
        }
    }

    if(found){
        cout << "Target is in set.";
    }
    else{
        cout << "The target is not in the set.";
    }

    return 0;
}