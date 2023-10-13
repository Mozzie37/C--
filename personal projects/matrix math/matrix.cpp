#include <iostream>
#include <vector>


using std::cin, std::cout, std::vector, std::string;

int getDouble(){
    double choice;
    while(true){
        cin >> choice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(10000000,'\n');
            cout << "Invalid input!\n";
        }
        else{
            return choice;
        }
    }
}


class matrix{
    private:
        int matrixRows, matrixColumns;
        vector<vector<double>> fullMatrix;

    public:
        //constructor
        matrix(){
            matrixRows = 0;
            matrixColumns = 0;
        }
        //setters
        
        void generateMatrix(int rows, int columns, double fill){
            vector<double> row;
            vector<vector<double>> answer;
            matrixRows = rows;
            matrixColumns = columns;
            for(int i = 0; i < columns; i++){
                row.push_back(fill);
            }
            for(int i = 0; i < rows; i++){
                answer.push_back(row);
            }
            int i = 2;
            fullMatrix = answer;
        }

        void printMatrix(){
            for(int i = 0; i < matrixRows; i++){
                for(int j = 0; j < matrixColumns; j++){
                    cout << fullMatrix[i][j] << " ";
                }
                cout << '\n';
            }
        }

        void setMatrix(){
            cout << "Please enter the indexes of the matrix from left to right top to bottom";
            for(int i = 0; i < matrixRows; i++){
                for(int j = 0; j < matrixColumns; j++){
                    fullMatrix[i][j] = getDouble();
                }
            }
        }

        void size(){
            cout << matrixRows << " X " << matrixColumns;
        }

};


int main(){
    matrix soln;
    return 0;
}