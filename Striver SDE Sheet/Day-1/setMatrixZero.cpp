#include<bits/stdc++.h>
using namespace std;

void setMatrixZero(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 = 0;
                }
            }
        }
    }
    for(int i=1 ; i<n ; i++){
        for(int j=1 ; j<m ; j++){
            if(matrix[i][j] != 0){
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j=0 ; j<m ; j++){
            matrix[0][j] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0 ; i<n ;i++){
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> v = {{1,1,1,1} , {1,0,1,0} , {1,1,1,1}};
    setMatrixZero(v);

    for(int i=0 ; i<v.size() ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}