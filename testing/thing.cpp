#include <iostream>
#include <fstream>


using namespace std;

int main(){
    ofstream file("output.txt");
    for(int i = 0; i <= 14; i++){
        for(int j = 0; j <= 15; j++){
            for(int k = 0; k <= 10; k++){
                file << i << "-" << j << "-" << k << "\n";
            }
        }
    }
    file.close();
    return 0;
}