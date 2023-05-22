#include<iostream>
#include<vector>
using namespace std;


int main()
{

    //Dynamic Allocation ( delete khudse )
    vector<int>* vd = new vector<int>(); 
    vector<int> v; // statically 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    /*
    only use this method for -> get & update
    v[1] = 200; // use push_back to insert

    */

    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(1)<<endl;


    cout<< endl;
    cout<< " To check the size Doule thing =>";

    for(int i=0 ; i<100 ; i++)
    {
        cout<<"Cap: "<<v.capacity()<<endl;
        cout<<"Size: "<<v.size()<<endl;
        v.push_back(i+1);
    }

}