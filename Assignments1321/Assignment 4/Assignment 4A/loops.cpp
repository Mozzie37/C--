#include <iostream>

using std::cin, std::cout, std::endl;

int choice, startNum, endNum;


/*
1) A loop that might run zero or more times
2) A loop that will always run at least once
3) A loop with a predetermined start and end
*/

void zeroPlus(int num){
   cout << "Counting: ";

    for (int i = num; i >= 0; i--){
        cout << i << ", ";
    }
   return;
}

void once(int num){
    cout << "Counting: ";
    do{
        cout << num << ", ";
        num = num--;
    } while (num >= 0);
    return;
}

void startEnd(int start, int end){
    cout << "Counting: ";
    if (start < end){
        for (int i = start; i <= end; i++){
            cout << i << ", ";
        }
    }
    else if (start > end){
        for (int i = start; i >= end; i--){
            cout << i << ", ";
        }
    }
    else if (start == end){
        cout << start;
    }
    return;
}

void getInput(){
    cout << "What loop do you want to use?\n";
    cout << "1) A loop that might run zero or more times\n";
    cout << "2) A loop that will always run at least once\n";
    cout << "3) A loop with a predetermined start and end\n";
    cout << "Your choice: ";
    cin >> choice;
    cout << "What's your start number? ";
    cin >> startNum;
    if(choice == 3){
        cout << "What's your end number? ";
        cin >> endNum;
    }
    return;
}


int main(){
    getInput();
    switch(choice){
        case 1:
        zeroPlus(startNum);
        break;
        case 2:
        once(startNum);
        break;
        case 3:
        startEnd(startNum, endNum);
        break;
    }



    return 0;
}

