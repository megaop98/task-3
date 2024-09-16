#include <iostream>
#include <cstring> 

using namespace std;

class student {
private:
    char name[30]; 
    int lab[10];    
    float average;  

public:
   
    student();

 
    void readData(const char* studentName, int grades[], int numGrades);

    void calculateAverage(int numGrades);

    void displayData(int numGrades) const;

    const char* getName() const;

    float getAverage() const;
};
