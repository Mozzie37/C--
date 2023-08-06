#include <iostream>

using namespace std;
int row, column, identifier, newRow, newColumn;



int main(){
    row = 5;
    column = 6;
    identifier = 17;
    newRow = 3;
    newColumn = 4;
    int** array = new int* [row];
    for(int i = 0; i < row; i++){
        array[i] = new int [column];
    }


    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            array[i][j] = identifier;
        }
        cout << endl;
    }

    array[newRow][newColumn] = 100;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << array[i][j] << " ";
        } 
        cout << '\n';
    }
    

    return 0;
}