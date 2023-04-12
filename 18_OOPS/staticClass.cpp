#include<iostream>
using namespace std;

class Student {
    public:
    // Non - Static -> bydefault
    int rollNumber;
    int age;

    // Static -> which belongs to a class
    static int totalSudents;

    Student(){
        totalSudents++;
    }

    int getRollNumber(){
        return rollNumber;
    }

};

int Student :: totalSudents = 0;