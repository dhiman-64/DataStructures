#include<iostream>
using namespace std;
#include "Createcpyclass.cpp"

int main()
{
    char name[] = "Ikshit";
    Student s1(20,name);
    s1.display();

    // Inbuild copy constructor -> Always Shallow Copy
    Student s2(s1);

    s2.name[0] = 'x';
    s1.display();
    s2.display();
}
