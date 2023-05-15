// Templates -> temprory dataType

#include<bits/stdc++.h>
using namespace std;
template <typename T, typename V>

class Pair{
    T x;
    V y;
    
    public:

    void setX(T x){
        this->x = x;
    }

    T getX(){
        return x;
    }

    void setY(V y){
        this->y = y;
    }

    V getY(){
        return y;
    }

};



template < typename A, typename B, typename C>
class Triplet{
    A x;
    B y;
    C z;

    public:

    void setX(A x){
        this->x = x;
    }

    void setY(B y){
        this->y = y;
    }

    void setZ(C z){
        this->z = z;
    }

    A getX(){
        return x;
    }

    B getY(){
        return y;
    }

    C getZ(){
        return z;
    }
};




int main()
{
    // Pair<int> p1;
    // Pair<double> p2;
    // Pair<char> p3;

    // p1.setX(10);
    // p1.setY(20);
    // cout<<p1.getX()<<endl;
    // cout<<p1.getY()<<endl;

    // p2.setX(10.01);
    // p2.setY(20.02);
    // cout<<p2.getX()<<endl;
    // cout<<p2.getY()<<endl;

    // p3.setX('a');
    // p3.setY('b');
    // cout<<p3.getX()<<endl;
    // cout<<p3.getY()<<endl;
    
    Pair<int , double> p1;
    p1.setX(10);
    p1.setY(20.02);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;

    Triplet<int , double, char> t1;

    t1.setX(10);
    t1.setY(10.01);
    t1.setZ('a');

    cout<<t1.getX()<<endl;
    cout<<t1.getY()<<endl;
    cout<<t1.getZ()<<endl;


}