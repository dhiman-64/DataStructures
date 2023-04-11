#include<iostream>
using namespace std;
#include "createClass2.cpp"

int main()
{
    
    Student s1;
    Student s2;

    // s2.age = 24;
    s2.rollNumber = 1432;

    cout<<"S2 Age: "<<s2.getAge()<<endl;

    Student * s3 = new Student;
    Student * s4 = new Student;

    // s4->age = 20;
    s4->rollNumber = 1575;
    
    cout<<"S4 Age: "<<s4->getAge()<<endl;

    s2.display();
    s3->display();

    // Using SetAGE function from Class
    s1.setAge(20);
    s3->setAge(24);
    s1.display();
    s3->display();

}
