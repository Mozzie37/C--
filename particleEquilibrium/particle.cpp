#include <iostream>
#include <cmath>
#include <vector>

using std::string, std::cout, std::cin, std::endl, std::vector;

float pi = 3.14159265359;


class force{
    private:
        float xMag, yMag, zMag, magnitude, alpha, beta, gamma, azmiuth, elevation;

    public:
        //constructor
        force(){
            xMag = 0;
            yMag = 0;
            zMag = 0;
            magnitude = 0;
            alpha = 0; 
            beta = 0;
            gamma = 0;
            azmiuth = 0;
            elevation = 0;
        }
        //overloaded constructor
        force(float xMag, float yMag, float zMag, float magnitude, float alpha, float beta, float gamma, float azmiuth, float elevation){
            
        }

        //setters
        void setXYZ(float x, float y, float z){
            //inputs
            xMag = x;
            yMag = y;
            zMag = z;
            //setting everything else
            magnitude = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
            alpha = acos(x / magnitude) * (180 / pi);
            beta = acos(y / magnitude) * (180 / pi);
            gamma = acos(z / magnitude) * (180 / pi);
            azmiuth = atan(y / x) * (180 / pi);
            elevation = atan(z / sqrt(pow(x,2) + pow(y,2))) * (180 / pi);
        }

        void setAlphaBetaGamma(float alph, float bet, float gam, float mag){
            //inputs
            alpha = alph;
            beta = bet;
            gamma = gam;
            magnitude = mag;
            //setting everything elsexMag = 0;
            yMag = 0;
            zMag = 0;
            azmiuth = 0;
            elevation = 0;

        }

        void setAsmiuthElevation(float azm, float ele, float mag){

        }

        //getters
        void getMeasurements(){

        }
};


//be able to take in 3 ways of calculating vectors
//1) cartesian vector coordinates plus force
//2) cartesian direction angles (3 angles) plus force
//3) azmiuth and elevation and force

int main(){
    force result, answer;
}