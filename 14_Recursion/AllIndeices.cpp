#include<iostream>

using namespace std;

void help(int input[],int size,int x, int i, int *k,int output[])
{
    if(i==size)
        return;
    if(input[i]==x)
    {
        output[0]=i;
        output++;
        *k=*k+1;
    }
    help(input,size,x,i+1,k,output);
}
int allIndexes(int input[], int size, int x, int output[]) {
  
    int i=0;int k=0;
    help(input,size,x,i,&k,output);
    return k;

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


