#include <iostream>

using std::cout, std::cin;

bool win = false;
char player = 'X';
int turn = 0;

char board[3][3] = {{'0','1','2'}, 
                    {'3','4','5'}, 
                    {'6','7','8'}};

void printBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }

}

void playerMove(){
    int choice;
    while(true){
        if(player == 'X'){
        cout << "Player 1 (X) move: "; 
        }
        else{
            cout << "Player 2 (O) move: ";
        }
        cin >> choice;
        if(choice < 3 and !(board[0][choice] == 'X' or board[0][choice] == 'O')){ 
            board[0][choice] = player;
            break;
        }
        else if((choice >= 3 and choice < 6) and !(board[1][choice - 3] == 'X' or board[1][choice - 3] == 'O')){
            board[1][choice - 3] = player;
            break;
        }
        else if((choice >=6 and choice < 9) and !(board[2][choice - 6] == 'X' or board[2][choice - 6] == 'O')){
            board[2][choice - 6] = player;
            break;
        }
        else{
            cout << "Invalid Input!\n";
        }
    }
    if(player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';
    }

}

void checkIfWin(){
    //rows
    if((board[0][0] == board[0][1] and board[0][0] == board[0][2]) or (board[1][0] == board[1][1] and board[1][0] == board[1][2]) or (board[2][0] == board[2][1] and board[2][0] == board[2][2])){
        win = true;
    }
    //columns
    if((board[0][0] == board[1][0] and board[0][0] == board[2][0]) or (board[0][1] == board[1][1] and board[0][1] == board[2][1]) or (board[0][2] == board[1][2] and board[0][2] == board[2][2])){
        win = true;
       }
    //diag
    if((board[0][0] == board[1][1] and board[0][0] == board[2][2]) or (board[0][2] == board[1][1] and board[0][2] == board[2][0])){
        win = true;
       }
    if(turn == 8){
        cout << "This game ends in a draw."; 
        return;
    }
    if (win == true){
        if(player == 'X'){
            player = 'O';
        }
        else{
            player = 'X';
        }
        printBoard();
        cout << "Player " << (turn % 2) + 1 << " (" << player << ")" << " wins!";
    }
}

int main(){
    while(!win){
        printBoard();
        playerMove();
        checkIfWin();
        turn++;
    }
}