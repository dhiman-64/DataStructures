#include<iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0 ; i<n ; i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }  
    cout<<"Print Row Wise"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Print column Wise"<<endl;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}