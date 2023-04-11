#include<iostream>
using namespace std;

class Student {
    public:
    int rollNumber;

    private:
    int age;

    public:

   Student(int a , int r){
        cout<<"this: "<<this<<endl;
        this->age = a;
        this->rollNumber = r;
    }

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
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