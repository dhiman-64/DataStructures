#include<iostream>
using namespace std;
#include "staticClass.cpp"

// Scope Resolution Operator ->  ::


int main()
{
    Student s1;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;
    // cout<<s1.totalSudents<<endl;// Logically incorrect
    cout<<Student :: totalSudents <<endl;

    s1.totalSudents = 20;

    Student s2;

    cout<<s2.totalSudents<<endl;
    cout<<Student :: totalSudents<<endl;
}



// Static Funtion Class