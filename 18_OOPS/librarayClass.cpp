// Intialization list

#include<iostream>
using namespace std;

class Student {
    public : 
    
    int age;
    const int rollNumber;
    int &x;

    Student(int r, int age) : rollNumber(r), age(age) ,  x(this->age){
        // rollNumber = r;  
    }


};