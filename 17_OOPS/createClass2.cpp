#include<iostream>
using namespace std;

// Student Class -> Blueprint/ Template
class Student {
    public:        // Access Modifier
    
    int rollNumber;

    private:

    int age;

    public:

    void display(){
        cout<<age<<" "<<rollNumber;
    }
};