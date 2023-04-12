#include<bits/stdc++.h>
using namespace std;

class Student {
    int age;
    char *name;

    public :

    Student(int age, char *name){
        // this->age = age;
        // //Shallow Copy
        // this->name = name;



        //DEEP copy
        this->age = age;
        this->name = new char[strlen(name) +1];
        strcpy(this->name , name);

    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

};