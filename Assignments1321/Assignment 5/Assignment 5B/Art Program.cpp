#include <iostream>
#include <fstream>

using std::cout, std::cin, std::string, std::endl, std::ofstream;

int width, height, fill;
int** canvas;

void input(){
    while(true){
        cout << "Enter an image width: ";
        cin >> width;
        if(width > 0){
            break;
        }
        cout << "Must be greater than 0!\n";
    }
    while(true){
        cout << "Enter image height: ";
        cin >> height;
        if(height > 0){
            break;
        }
        cout << "Must be greater than 0!";
    }
    while(true){
        cout << "Enter the fill color: ";
        cin >> fill;
        if(fill >= 0 and fill <=255){
            break;
        }
        cout << "Must be between 0 and 255!";
    }
    return;
}
//[rows][columns]  [height][width]
void canvasInitilize(){
    canvas = new int* [height];
    for(int i = 0; i < height; i++){
        canvas[i] = new int [width];
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            canvas[i][j] = fill;
        }
    }
    return;
}

void draw(){   
    cout << "P2\n" << width << " " << height << "\n255\n";
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(canvas[i][j] >= 100){
                cout << canvas[i][j] << " ";
            }
            else if(canvas [i][j] >= 10){
                cout << canvas [i][j] << "  ";
            }
            else{
                cout << canvas[i][j] << "   ";
            }
        }
        cout << "\n";
    }
    return;
}

void pixel(){
    int row, column, newColor;
    while(true){
        cout << "Row: ";
        cin >> row;
        cout << "Column: ";
        cin >> column;
        cout << "New Color: ";
        cin >> newColor;
        if(row >= 0 and row <= height - 1 and column >= 0 and column <= width - 1 and newColor >=0 and newColor <= 255){
            break;
        }
        cout << "Invalid information!\n";
    }
    canvas[row][column] = newColor;
    return;
}

void line(){
    int row, column, newColor, length;
    string direction;
    while(true){
        cout << "Row: ";
        cin >> row;
        cout << "Column: ";
        cin >> column;
        cout << "New Color: ";
        cin >> newColor;
        cout << "Length: ";
        cin >> length;
        cout << "Direction: ";
        cin >> direction;

        if(row >= 0 and row < height and column >= 0 and column < width and newColor >= 0 and newColor <= 255 and length >= 0 and (direction == "up" or direction == "down" or direction == "left" or direction == "right")){
            break;
        }
        cout << "Invalid command!\n";
    }

    if(direction == "up"){
        for(int i = 0; row - i >= 0 and i < length; i++){
            canvas[row - i][column] = newColor;
        }
    }

    if(direction == "down"){
        for(int i = 0; row + i <= height and i < length; i++){
            canvas[row + i][column] = newColor;
        }
    }
    
    if(direction == "left"){
        for(int i = 0; column - i >= 0 and i < length; i++){
            canvas[row][column - i] = newColor;
        }
    }
    if(direction == "right"){
        for(int i = 0; column + i <= width and i < length; i++){
            canvas[row][column + i] = newColor;
        }
    }

}
    

void fileGen(){
    ofstream file("image.pgm");
    file << "P2\n" << width << " " << height << "\n255\n";
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            file << canvas[i][j] << " ";
        }
        file << "\n";
    }
    file.close();
    return;
}
void edits(){
    bool running = true;
    while (running){
        int answer;
        cout << "What will you do?\n";
        cout << "1) Fill in a pixel\n";
        cout << "2) Fill in a line\n";
        cout << "3) Print out the image\n";
        cout << "4) Export the image to a .pbm file\n";
        cout << "5) Quit\n";
        while(true){
            cout << "Choice? ";
            cin >> answer;
            if(answer > 0 and answer <= 5){
                break;
            }

        }
        switch(answer){
            case 1:
                pixel();
                break;
            case 2:
                line();
                break;
            case 3:
                draw();
                break;
            case 4:
                 fileGen(); 
                 break;
            case 5:
                running = false; 
                break;
        }    
    }
    return;
}

int main(){
    cout << "[KSU Image Manipulation Program]\n";
    input();
    canvasInitilize();
    edits();
    cout << "\n[Exiting KSU Image Manipulation Program]";
    return 0;   
}