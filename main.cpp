#include "student.h"
#include <fstream> 
#include<iostream>


using namespace std;

int main() {
    ifstream inFile("students_data.txt"); 
    if (!inFile.is_open()) {
         cout << "Error: Could not open input file." << endl;
        return 1;
    }

    int numStudents, numGrades;
    inFile >> numStudents >> numGrades;

    student students[50];  
    char studentName[30];  
    int grades[10];      

    
    for (int i = 0; i < numStudents; i++) {
        inFile >> studentName; 
        for (int j = 0; j < numGrades; j++) {
            inFile >> grades[j]; 
        }
    
        students[i].readData(studentName, grades, numGrades);
        students[i].calculateAverage(numGrades);
    }

   
    inFile.close();

 
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayData(numGrades);
    }

    
    return 0;
}
