#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(int arr[], int n, int target)
{
    vector<vector<int>> result;
    
    if( n==0 ){
        return result;
    }
    sort(arr, arr+n);

    for(int i=0 ; i<n ; i++){
        long long target3 = target - arr[i];

        for(int j = i+1 ; j<n ; j++){
            long long target2 = target3 - arr[i];

            int start = j+1;
            int end  = n-1;
            while(start < end){
                long long twoSum = arr[start] + arr[end];

                if(twoSum < target2) start++;
                else if(twoSum > target2) end--;

                else{
                    vector<int> quad(4,0);
                    quad[0] = arr[i];
                    quad[1] = arr[j];
                    quad[2] = arr[start];
                    quad[3] = arr[end];
                    result.push_back(quad);


                    while(start<end && arr[start] == quad[2]) ++start;

                    while(start<end && arr[end] == quad[3]) --end;

                }
            }
            while(j+1<n && arr[j+1] == arr[j]) ++j;
        }
        while(i+1<n && arr[i+1] == arr[i])
        ++i;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

}