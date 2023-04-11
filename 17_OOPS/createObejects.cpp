#include<iostream>
using namespace std;
#include "createClass.cpp"


// class Student {
//     int rollNumber;
//     int age;
// };


int main()
{

// Static Allocation
Student s1;   // s1 is Object here!
Student s2;   // stores Random Garbage value

s1.age = 20;
s1.rollNumber = 1575;

cout<<s1.age<<endl;
cout<<s1.rollNumber<<endl;

// Dynamic Allocation
Student * s3 = new Student;
Student * s4 = new Student;

(*s3).age = 24;
(*s3).rollNumber = 1234;


// Important
s4-> age = 23;
s4-> rollNumber = 4321;

cout<<s4->age<<endl;
cout<<s4->rollNumber<<endl;

}