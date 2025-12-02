#include<iostream>
using namespace std;
int main()
{
    int n,i,num;
    cin>>n;
    i=1;
    for(;i<=n;i++)
    {
        if(i%2==0){
            num=0;
        }
        else{
            num=1;
        }
        for(int row=1;row<=i;row++)
        {
            cout<<num<<" ";
            num=1-num; 
        }
        cout<<endl;
    }
}