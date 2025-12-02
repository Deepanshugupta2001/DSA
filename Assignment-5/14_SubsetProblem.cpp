#include<iostream>
using namespace std;
int ctr=0;
void subset(int i,int j,int *arr,int target,int *b){
    if(arr[i]=='\0'){
        b[j]='\0';
        int sum=0;
        for (int k = 0; k < j; k++)
        {
            sum+=b[k];
        }
        if(sum==target){
            ctr++;
            for (int m = 0; m < j; m++)
            {
                cout<<b[m]<<" ";
            }
            cout<<"  ";
        }
        return;
    }

    //recursive case
    //ith number ko include nhi karna hai
    subset(i+1,j,arr,target,b);
    //ith number ko include karna hai
    b[j]=arr[i];
    subset(i+1,j+1,arr,target,b);
}
int main(){
    int n,target;
    cin>>n;
    int arr[100],b[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    subset(0,0,arr,target,b);
    cout<<endl;
    cout<<ctr<<endl;
    return 0;
}