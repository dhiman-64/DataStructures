#include<iostream>
using namespace std;

int main()
{
    int ror = 15 | 30;
    int rand = 15 & 30;
    int rnot = ~15;
    int rxor = 15^30;
    int rleft = 15<<2;
    int rright = 15>>2;
    cout<<"OR: "<<ror<<endl;
    cout<<"AND: "<<rand<<endl;
    cout<<"NOT: "<<rnot<<endl;
    cout<<"XOR: "<<rxor<<endl;
    cout<<"Left Shift: "<<rleft<<endl;
    cout<<"Right Shift: "<<rright<<endl;
}