#include <iostream>

using std::string, std::cin, std::cout;

string board[6][7] = {{"-", "-", "-", "-", "-", "-", "-", },
                      {"-", "-", "-", "-", "-", "-", "-", },
                      {"-", "-", "-", "-", "-", "-", "-", },
                      {"-", "-", "-", "-", "-", "-", "-", },
                      {"-", "-", "-", "-", "-", "-", "-", },
                      {"-", "-", "-", "-", "-", "-", "-", },};
int turn = 0;
bool running = true;
string player = "X";


void printBoard(){
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return;
}

void playerMove(){
    int choice;
    bool moveOkay = false;
    while(!moveOkay){
        //this loop grabs the player input
        while(true){
            if(player == "X"){
            cout << "Player 1 (X) move: "; 
            }
            else{
                cout << "Player 2 (O) move: ";
            }
            cin >> choice;
            if(choice > 0 and choice <= 7){
                break;
            }
            else{
                cout << "Invalid input\n";
                cin.clear();
                cin.ignore();
            }
        }
        //this both checks the position is valid, and writes it to the board
        choice--;
        for(int i = 5; i >=0; i--){
            if(!(board[i][choice] == "X" or board[i][choice] == "O")){
              board[i][choice] = player;
                moveOkay = true;
                break;
            }
            else{continue;}
        }
        if(!moveOkay){
            cout << "Column is full, please select a different column\n";
        }
    }
    if(player == "X"){
        player = "O"; 
    }
    else{
        player = "X";
    }
}

void horizontalCheck(){
    //works
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            if(board[i][j] == "X" and 
               board[i][j + 1] == "X" and
               board[i][j + 2] == "X" and
               board[i][j + 3] == "X"){
                cout << "X wins!\n";
                running = false;
            }
            else if (board[i][j] == "O" and 
                     board[i][j + 1] == "O" and
                     board[i][j + 2] == "O" and
                     board[i][j + 3] == "O"){
                cout << "O wins!\n";
                running = false;
            }
        }
    }
}

void verticalCheck(){
    //works
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 7; j++){
            if(board[i][j] == "X" and 
               board[i + 1][j] == "X" and
               board[i + 2][j] == "X" and
               board[i + 3][j] == "X"){
                cout << "X wins!\n";
                running = false;
            }
            else if (board[i][j] == "O" and 
                     board[i + 1][j] == "O" and
                     board[i + 2][j] == "O" and
                     board[i + 3][j] == "O"){
                cout << "O wins!\n";
                running = false;
            }
        }
    }


}

void diagonalCheck(){
    //this checks top left to bottom right
    /*
    0
     0
      0
       0
    */
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(board[i][j] == "X" and 
               board[i + 1][j + 1] == "X" and
               board[i + 2][j + 2] == "X" and
               board[i + 3][j + 3] == "X"){
                cout << "X wins!\n";
                running = false;
            }
            else if (board[i][j] == "O" and 
                     board[i + 1][j + 1] == "O" and
                     board[i + 2][j + 2] == "O" and
                     board[i + 3][j + 3] == "O"){
                cout << "O wins!\n";
                running = false;
            }
        }
    }
    //top right to bottom left
    /*
       0
      0
     0
    0
    */
   for(int i = 5; i >= 3; i--){
        for(int j = 0; j < 4; j++){
            if(board[i][j] == "X" and 
               board[i - 1][j + 1] == "X" and
               board[i - 2][j + 2] == "X" and
               board[i - 3][j + 3] == "X"){
                cout << "X wins!\n";
                running = false;
            }
            else if (board[i][j] == "O" and 
                     board[i - 1][j + 1] == "O" and
                     board[i - 2][j + 2] == "O" and
                     board[i - 3][j + 3] == "O"){
                cout << "O wins!\n";
                running = false;
            }
        }
    }

}

int main(){
    while(running){
        if(turn == 42){
            running = false;
            cout << "Draw!";
            break;
        }
        printBoard();
        playerMove();
        horizontalCheck();
        verticalCheck();
        diagonalCheck();
        turn++;
    }
    printBoard();
    return 0;
}