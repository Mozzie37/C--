#include <iostream>


using namespace std;


int main(){
    float meters;
    const double moonDistance = 0.0000000026;
    const int crackerPerMeter = 40;
    cout << "[Distance calculator] \nHow many meters? ";
    cin >> meters;
    cout << meters << " meter(s) is...\n..."  << meters * moonDistance << " distance from the Moon\n..." << meters * crackerPerMeter << " Animal Crackers long" << endl;
    return 0;
}