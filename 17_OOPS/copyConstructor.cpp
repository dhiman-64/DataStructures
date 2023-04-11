#include<iostream>
using namespace std;
#include "createClass4.cpp"

int main()
{
    Student s1(20,1575);
    cout<<"S1 : ";
    s1.display();

    // Copy Constructor
    Student s2(s1);
    cout<<"S2 : ";
    s2.display();


    Student *s3 = new Student(20,1575);
    cout<<"S3 : ";
    s3->display();

    // Copy Constrcutor
    Student *s4 = new Student(*s3);
    // Student s4(*s3);
    cout<<"S4 : ";
    s4->display();


}