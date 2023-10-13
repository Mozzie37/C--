#include <iostream>
#include <cmath>
#include <vector>

using std::string, std::cout, std::cin, std::endl, std:: vector;

float pi = 3.14159265359;
bool running = true;


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

        //setters
        void addXYZ(float x, float y, float z){
            //adding x y z
            xMag += x;
            yMag += y;
            zMag += z;
            setMeasurements();
        }

        void addAlphaBetaGamma(float alph, float bet, float gam, float mag){
            //inputs setting to radians
            alph *= (pi / 180);
            bet *= (pi / 180);
            gam *= (pi / 180);
            //adding x y z
            xMag += cos(alph) * mag;
            yMag += cos(bet) * mag;
            zMag += cos(gam) * mag;
            setMeasurements();
        }

        void addAsmiuthElevation(float azm, float ele, float mag){
            //inputs setting to radians
            azm *= (pi / 180);
            ele *= (pi / 180);
            //adding x y z
            xMag += cos(ele) * cos(azm) * mag;
            yMag += cos(ele) * sin(azm) * mag;
            zMag += sin(ele) * mag;
            setMeasurements();
        }

        //this makes sure that angles are always correct =]
        void setMeasurements(){
            magnitude = sqrt(pow(xMag,2) + pow(yMag,2) + pow(zMag,2));
            // 3 angles
            alpha = acos(xMag / magnitude) * (180 / pi);
            beta = acos(yMag / magnitude) * (180 / pi);
            gamma = acos(zMag / magnitude) * (180 / pi);
            //2 angles
            if(xMag < 0 and yMag > 0){
                azmiuth = 180 + (atan(yMag / xMag) * (180 / pi));
            }
            else if (xMag < 0 and yMag < 0){
                azmiuth = -(180 - (atan(yMag / xMag) * (180 / pi)));
            }
            else{
                azmiuth = atan(yMag / xMag) * (180 / pi);
                elevation = atan(zMag / sqrt(pow(xMag,2) + pow(yMag,2))) * (180 / pi);
            }
        }
        //getter
        void printResult(){
            cout << "Magnitude: " << magnitude << "\n";
            cout << "X Component: " << xMag << "\n";
            cout << "Y Component: " << yMag << "\n";
            cout << "Z Component: " << zMag << "\n";
            cout << "Alpha: " << alpha << "\n";
            cout << "Beta: " << beta << "\n";
            cout << "Gamma: " << gamma << "\n";
            cout << "Azmiuth: " << azmiuth << "\n";
            cout << "Elevation: " << elevation << "\n";
        }
};


//todo: finish this
int getChoice(){
    int choice;
    while(true){
        cout << "1) My force has X Y and Z components\n";
        cout << "2) My force has Alpha, Beta, and Gamma direction angles\n";
        cout << "3) My force has Azmiuth and Elevation direction angles\n";
        cout << "4) Output the force resultant\n";
        cout << "Please select a number:";
        cin >> choice;
        if(cin.fail()){
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    }
    return choice;
}

int getFloat(string question){
    float choice;
    while(true){
        cout << question;
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

vector<float> XYZ(){
    vector<float> answer = {0,0,0};
    answer[0] = getFloat("What is your X value: ");
    answer[1] = getFloat("What is your Y value: ");
    answer[2] = getFloat("What is your Z value: ");
    return answer;
}

vector<float> alphaBetaGamma(){
    vector<float> answer = {0,0,0,0};
    float lawOfCosines;
    while(true){
        answer[0] = getFloat("What is your Alpha angle: ");
        answer[1] = getFloat("What is your Beta angle: ");
        answer[2] = getFloat("What is your Gamma angle: ");
        answer[3] = getFloat("What is your force magnitude: ");
        lawOfCosines = pow(cos(answer[0] * (pi / 180)),2) + pow(cos(answer[1] * (pi / 180)),2) + pow(cos(answer[2] * (pi / 180)),2);
        if(abs(1 - lawOfCosines) > .001){
            cout << "Your angles do not follow the cosine law, please try again.\n";
            continue;
        }
        else{
            break;
        }
    }
    return answer;
}

vector<float> azmiuthElevation(){
    vector<float> answer = {0,0,0};
    answer[0] = getFloat("What is your Azmiuth angle: ");
    answer[1] = getFloat("What is your Elevation angle: ");
    answer[2] = getFloat("What is your force magnitude: ");
    return answer;
}

int main(){
    force result;
    vector<float> ans;
    //cout << "Welcome to the force resultant calculator!\n";
    while(running){
        switch(getChoice()){
            case 1:
            ans = XYZ();
            result.addXYZ(ans[0],ans[1],ans[2]);
            break;
            case 2:
            ans = alphaBetaGamma();
            result.addAlphaBetaGamma(ans[0],ans[1],ans[2],ans[3]);
            break;
            case 3:
            ans = azmiuthElevation();
            result.addAsmiuthElevation(ans[0],ans[1],ans[2]);
            break;
            case 4:
            running = false;
            break;
            default:
            cout << "Invalid input!\n";
        }
    }
    result.printResult();
    return 0;
}