#include "student.h"


student::student() {
    strcpy_s(name, "");
    average = 0.0;     
    for (int i = 0; i < 10; i++) {
        lab[i] = 0;   
    }
}


void student::readData(const char* studentName, int grades[], int numGrades) {
    strcpy_s(name, studentName);  
    for (int i = 0; i < numGrades; i++) {
        lab[i] = grades[i];     
    }
}


void student::calculateAverage(int numGrades) {
    int sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += lab[i];  
    }
    average = static_cast<float>(sum) / numGrades;  
}


void student::displayData(int numGrades) const {
    cout << "Name: " << name << "\nGrades: ";
    for (int i = 0; i < numGrades; i++) {
        cout << lab[i] << " ";
    }
    cout << "\nAverage: " << average << endl;
}

const char* student::getName() const {
    return name;
}


float student::getAverage() const {
    return average;
}
