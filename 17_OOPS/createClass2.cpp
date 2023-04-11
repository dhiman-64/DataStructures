#include<iostream>
using namespace std;

// Student Class -> Blueprint/ Template
class Student {
    public:        // Access Modifier
    
    int rollNumber;

    private:

    int age;

    public:

    // Getter -> EXAMPLE
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    // SETTER -> EXAMPLE
    void setAge(int a, int password ){
        
        // Constrain

        if(password!=1234){
            return;
        }
        if(age<0){
            return;
        }
        age = a;
    }
};