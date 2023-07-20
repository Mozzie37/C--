#include <iostream>
#include "func.h"
using namespace std;

int main(){
    int red;
    int green;
    int blue;
    cout << "Enter a red value (0-255):";
    cin >> red;
    cout << "Enter a green value (0-255):";
    cin >> green;
    cout << "Enter a blue value (0-255):";
    cin >> blue;
    cout << "Red =" << invert(red) << " Green =" << invert(green) << " Blue =" << invert(blue) << endl;
    cout << "Red =" << normalize(invert(red)) << " Green =" << normalize(invert(green)) << " Blue =" << normalize(invert(blue)) << endl;
}

