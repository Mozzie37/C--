#include <iostream>
#include <cstdlib>

using std::cin, std::cout, std::string;



char* board = new char[9]{'0', '1', '2', '3', '4', '5', '6', '7', '8'};

void clearScreen(){
    std::system("cls");
    return;
}

void printBoard(){
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << board[count] << " ";
            count ++;
        }
        cout << "\n";
    }    
    return;
}

void playerMove(bool xTurn, int spot){
    char move;
    if(xTurn){
        move = 'X';
    }
    else{
        move = 'O';
    }
    board[spot] = move;
    return;
}

char start(){
    char choice;
    clearScreen();
    cout << "Please select your starting Character (X or O): ";
    cin >> choice;
    while(choice != 'X' and choice != 'O'){
        clearScreen();
        cout << "Invalid input\nPlease select your starting Character (X or O): ";
        cin >> choice;
    }
    if(choice = 'X'){
        return true;
    }
    else{
        return false;
    }
}

int main (){
    int turn;
    if(start()){
        turn = 0;
    }
    else{
        turn = 1; 
    }
    bool running = true;
    bool xTurn;
    while(running){
        printBoard();

    }
}