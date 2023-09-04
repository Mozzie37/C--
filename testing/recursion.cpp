#include <iostream>

using namespace std;


void recursion(int input){
    if (input >= 0){
        cout << "My number is " << input << "\n";
        input--;
        recursion(input);
    }
    else{
        cout << "Finished";
        return;
    }



}

int main(){
    recursion(10);

}