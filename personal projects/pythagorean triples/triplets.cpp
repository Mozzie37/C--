#include <iostream>
#include <cmath>
#include <vector>

using std::vector, std::cin, std::cout, std::string;

int a, b, c, count;
float test;

int solution[10][3];

void printSolution(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 3; j++){
			cout << solution[i][j] << " ";
		}
		cout << "\n";
	}
}



int main(){
	c = 1;
	count = 0;
	while(count < 10){
		for(int b = 1; b < c; b++){
			for(int a = 1; a < b; a++){
				if(c == sqrt(pow(a,2) + pow(b,2))){
					solution[count][0] = a;
					solution[count][1] = b;
					solution[count][2] = c;
					count++;
				}
			}
		}
		c++;
	}
	printSolution();
	return 0;
}