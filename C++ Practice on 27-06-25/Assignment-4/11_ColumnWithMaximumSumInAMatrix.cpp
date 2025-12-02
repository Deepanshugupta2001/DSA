#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }

    int idx=0;
    int sum=INT_MIN;
    for (int j = 0; j < n; j++)
    {
        int sum1=0;
        for (int i = 0; i < n; i++)
        {
            sum1+=a[i][j];
        }
        if(sum1>sum){
            sum=sum1;
            idx=j+1;
        }
    }
    cout<<idx<<" ";
    cout<<sum<<endl;
    return 0;    
}