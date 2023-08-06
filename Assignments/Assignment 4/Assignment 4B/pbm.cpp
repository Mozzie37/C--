#include <iostream>

using std::cout, std::cin;
int squareSize, borderSize, squareColor, borderColor;
void userInput(){
    while(true){
        cout << "Enter the size of the square: ";
        cin >> squareSize;
        if(squareSize >= 0){
            break;
        }
        cout << "Invalid input\n";
    }
    while (true){
        cout << "Enter the size of the border: ";
        cin >> borderSize;
        if (borderSize >= 0){
            break;
        }
        cout << "Invalid input!\n";
    }
    while(true){
        cout << "Enter the color of the square: ";
        cin >> squareColor;
        if(squareColor == 0 or squareColor == 1){
        break;
        }
        cout << "Invalid input!\n";
    }
    while(true){
        cout << "Enter the color of the border: ";
        cin >> borderColor;
        if(borderColor == 0 or borderColor == 1){
        break;
        }
        cout << "Invalid input!\n";
    }
    return;
}

void pbmGenerator(int squareSize, int squareColor, int borderSize, int borderColor){
    int fileSize = squareSize + borderSize * 2;
    cout << "PBM File Contents:\n";
    cout << "P1\n";
    cout << fileSize << " " << fileSize << "\n";
    // this is for the first rows of the image that make up the border
    for(int i = fileSize; i > 0; i--){
        if(i <= borderSize or i > fileSize - borderSize){
            for(int i = fileSize; i > 0; i--){
                cout << borderColor << " ";
            }
            cout << "\n";
        }
        else{
            for(int i = borderSize; i > 0; i--){
                cout << borderColor << " ";
            }
            for(int i = squareSize; i > 0; i--){
                cout << squareColor << " ";
            }
            for(int i = borderSize; i > 0; i--){
                cout << borderColor << " ";
            }
            cout << "\n";
        }
    }
    return;
}


int main(){
    userInput();
    pbmGenerator(squareSize, squareColor, borderSize, borderColor);
    return 0;
}