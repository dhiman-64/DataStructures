#include<bits/stdc++.h>
using namespace std;

class Student {
    int age;

    public:

    char *name;

    Student(int age, char *name){
        this-> age = age;
        this-> name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }


    // Copy Constructor
    Student(Student const &s){
        this->age = s.age;
        //this->name = name;  //Shallow copy
        this-> name = new char[strlen(s.name)+1];
        strcpy(this->name , s.name);


    }
};