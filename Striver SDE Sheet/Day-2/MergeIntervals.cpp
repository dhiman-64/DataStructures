#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> MergeInterval(vector<vector<int>> &v)
{
    sort(v.begin() , v.end());
    vector<vector<int>> ans;
    ans.push_back(v[0]);

    for(int i=1 ; i<v.size(); i++){
        if(ans.back()[1] > v[i][0]){
            ans.back()[i] = max(ans.back()[1] , v[i][1]);
        }
        else{
            ans.push_back(v[i]);
        }
    }
    return ans;
}


int main()
{
    vector<vector<int>> v = {{1,3} , {2,6} , {8,10} , {15,18}};
    vector<vector<int>>ans=MergeInterval(v);

    for(int i=0 ; i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}