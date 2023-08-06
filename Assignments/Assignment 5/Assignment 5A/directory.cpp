#include <iostream>
#include <cctype>


using std::cout, std::cin, std::string, std::endl;

bool quit = true;


//array area
int arraySize = 5;

int idAssignment[] = {0,1,2,3,4};
string firstName[] = {"Mark", "Amanda", "Norman", "Steve", "Jesse"};
string lastName[] = {"Sloan", "Bentley", "Briggs", "Sloan", "Travis"};
int age[] = {67, 33, 47, 35, 24};
string occupation[] = {"Chief of Internal Medicine", "Pathologist", "Administrator", "Hospital Security", "Surgeon Intern"};
string medicalLicense[] = {"true", "true", "false", "false", "true"};




//function area
void mainloop(){
    int choice;
    int id;
    int counter = 0;
    string last;
    cout << "1) List all employees\n";
    cout << "2) Search employee records by ID\n";
    cout << "3) Search employee records by Last Name\n";
    cout << "4) Quit\n";
    cout << "Choice: ";

    while (true){
        cin >> choice;
        if(choice == 1 or choice == 2 or choice == 3 or choice == 4 or choice == 5){
            break;
        }
        cout << "No option " << choice << "!";
    }
    switch(choice) {
        
        case 1:
        cout << "\n";
        for(int i = 0; i <= arraySize - 1; i++){
            cout << "#" << idAssignment[i] << ": " << firstName[i] << " " << lastName[i] << ", Age " << age[i] << ", " << occupation[i] << ", Medical Liscense: " << medicalLicense[i] << "\n";
        }
        cout << "\n\n";
        break;
        case 2:
            while(true){
                cout << "ID: ";
                cin >> id;
                if (id < arraySize){
                    break;
                }
                cout << "Invalid ID!\n";
            }

            cout << "\n#" << idAssignment[id] << ": " << firstName[id] << " " << lastName[id] << ", Age " << age[id] << ", " << occupation[id] << ", Medical Liscense: " << medicalLicense[id] << "\n\n";
            break;
        case 3:
            
            cout << "Last name: ";
            cin >> last;
            for(int i = 0; i < arraySize; i++){
                if(last == lastName[i]){
                    cout << "\n#" << idAssignment[i] << ": " << firstName[i] << " " << lastName[i] << ", Age " << age[i] << ", " << occupation[i] << ", Medical Liscense: " << medicalLicense[i] << "\n";
                    counter += 1;                  
                }
            }
            
            if(counter == 0){
                    cout << "No records found!\n";
                }
            cout << "\n";
        break;
        case 4:
        quit = false;
        break;
        default:
        cout << "No option " << choice << "!\n";

    }
}



//main function
int main(){
    
    cout << "[Comminity General Hospital Directory]\n";
    
    while (quit){
        mainloop();
    }
    cout << "[Closing Directory...]";
    return 0;
}