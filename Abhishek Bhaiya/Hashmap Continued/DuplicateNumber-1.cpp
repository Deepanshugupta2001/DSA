#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,2,2};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    for (int j = 0; j < n; j++)
    {
        int idx=arr[i];
        swap(arr[j],arr[idx]);
    }
    
    
}