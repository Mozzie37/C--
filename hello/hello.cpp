#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;


int main(){
    float sum = 0;
    auto start = high_resolution_clock::now();
    for (int i = 1; i < 1001; i++ ){
        sum = sum + i;
    }
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "The final product was: " << sum << "\nThe time taken was: " << duration.count(); 
}


/*ideas for easier projects
1. calculator
2. tic tac toe    
3. checkers
4. unit converter WITH GUI
5. simple platformer
6. stoiciometry calculator (idc if i spelled it right or not)
7. 
*/
    