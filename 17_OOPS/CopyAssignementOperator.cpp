#include<iostream>
using namespace std;
#include "createClass4.cpp"

int main()
{
    // Copy Assignment Operator
    Student s1(10,1001);
    Student s2(20,2001);
    Student *s3 = new Student(30,3001);

    s2 = s1;
    *s3 = s1;
    s2 = *s3;

}