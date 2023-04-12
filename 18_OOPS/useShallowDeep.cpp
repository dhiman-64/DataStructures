#include<iostream>
using namespace std;
#include "shallowDeepClass.cpp"

int main()
{
    char name[] = "Ikshit";
    Student s1(20,name);
    s1.display();

    name[4] = 'a';
    Student s2(24,name);
    s2.display();

    s1.display();
    
}