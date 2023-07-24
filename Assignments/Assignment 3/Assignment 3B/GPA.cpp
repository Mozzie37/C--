#include <iostream>


using std::cout, std::cin, std::endl;
float totalHours, totalQPoints, semesterGPA;


void totalGPA(float hours, float grade){
    totalHours += hours;
    totalQPoints += hours * grade;
}


int main(){
    float hours, grade;
    for (int i = 1; i < 5; i++){
        cout  << "Course " << i << " hours: ";
        cin >> hours;
        cout << "Grade for course " << i << ": ";
        cin >> grade;
        totalGPA(hours, grade);
    }
    semesterGPA = totalQPoints / totalHours;
    cout << "Total hours is: " << totalHours << endl;
    cout << "Total quality points is: " << totalQPoints << endl;
    cout << "Your GPA for this semester is " << semesterGPA << endl;
    
    return 0;
}