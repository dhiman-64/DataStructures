// Whenever we create a class the defualt constructor is Automatically Made.

// Use of CONSTRUCTOR  => to intiallize with Defaut Value

#include<iostream>
using namespace std;

class Student {

    public:
    int rollNumber;

    private:
    int age;

    public:

    // Default Constructor
    // Multiple constructor at a time

    Student(){
        cout<<"Constructor1 called !"<<endl;
    }

    //Parameterized Constructoe
    Student(int rn){
        cout<<"Constructor2 Called !"<<endl;
        rollNumber = rn;
    }

    Student(int a , int r){
        cout<<"Constructor3 Called !!"<<endl;
        age = a;
        rollNumber = r;
    }

    //Getter
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
    //Setter
    void setAge(int a, int password){
        if(password!=1234){
            return;
        }
        if(age<0){
            return;
        }
        age = a;
    }
};