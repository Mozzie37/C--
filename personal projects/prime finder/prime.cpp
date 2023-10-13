#include <cmath>
#include <iostream>


using std::cout, std::cin;

int numOfPrimes(int max){
    int answer = 2;
    cout << "2\n";
    for(int i = 2; i < max; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                answer++;
                break;
            }
            else if (i - j == 1){
                cout << i << "\n";
            }
        }
    }
    answer = max - answer;
    return answer;
}


int main(){
    int x = 20;
    cout << numOfPrimes(x) << " Number of primes from 1 to " << x;
    return 0;
}