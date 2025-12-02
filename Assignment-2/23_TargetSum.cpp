#include<iostream>
using namespace std;
void targetsum(int i,int *arr,int target,int sum,int &ctr,int n){
    //base case
    if(i==n){
        if(sum==target){
            ctr++;
        }
        return ;
    }

    //recursive case
    //+1 lekar dekho
    targetsum(i+1,arr,target,sum+arr[i],ctr,n);

    //-1 lekar dekho
    targetsum(i+1,arr,target,sum-arr[i],ctr,n);

}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    targetsum(0,arr,target,0,ctr,n);
    cout<<ctr<<endl;
    return 0;
    
}