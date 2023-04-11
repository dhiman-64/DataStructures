#include<iostream>
using namespace std;
#include "createClass3.cpp"

int main()
{
    Student s1;

    s1.display();

    Student s2;

    Student *s3 = new Student;
    s3->display();


    cout<<"Parametrized constructor Demo !!"<<endl;

    Student s4(1575);
    s4.display();

    Student * s5 = new Student(1234);
    s5->display();


    Student s6(20,1575);
    s6.display();

    Student * s7 = new Student(14,21);
    s7->display();

}