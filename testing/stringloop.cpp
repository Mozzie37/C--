#include <iostream>
#include <string>



bool isPalindrome(int x){
    std::string backwards;
    std::string input = std::to_string(x);
    for(int i = input.length() - 1; i >= 0; i--){
        backwards += input[i];
    }
    if(backwards == input) return true;
    return false;
}


int main(){

    std::cout << isPalindrome(100);
    std::cout << isPalindrome(-29);
    std::cout << isPalindrome(567765);
}