#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    for(int i=0 ; i<n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> v = {{1,2,3} , {4,5,6,} , {7,8,9}};
    rotate(v);
     for(int i=0 ; i<v.size(); i++){
        for(int j=0 ; j<v[i].size() ; j++)
        {
            cout<<v[i][j]<<endl;
        }
        cout<<endl;
     }
}