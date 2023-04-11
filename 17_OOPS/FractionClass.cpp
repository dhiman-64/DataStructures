#include<iostream>
using namespace std;

class Fraction {

    private:

    int num;
    int deno;

    public:
    //Constructor
    Fraction(int num, int deno){
        this->num = num;
        this->deno = deno;
    }

    void print(){
        cout<<num<<" / "<<deno<<endl;
    }

    void simplify(){
        int gcd = 1;
        int j = min(this->num , this->deno);
        for(int i=1 ; i<=j ; i++){
            if(this->num %i ==0 && this->deno % i ==0){
                gcd = i;
            }
        }
        this->num = this->num/gcd;
        this->deno= this->deno/gcd;
    }

    void add(Fraction f2){
        int lcm = deno * f2.deno;
        int x = lcm/deno;
        int y = lcm / f2.deno;
        
        int number = x * num + (y*f2.num);

        num = number;
        deno = lcm;

        simplify();
    }

};