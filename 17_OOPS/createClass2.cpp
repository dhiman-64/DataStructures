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
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }
};