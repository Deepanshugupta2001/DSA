#include<iostream>
using namespace std;
int main(){
    int n,a[100][100],n1=0,sum=0,sum1=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int sr=0,sc=0,ec=n-1,er=n-1;
    while (sr<=er and sc<=ec)
    { 
    for (int i = 0; i < n ; i++)
    {
        for (int i = 0; i < n; i++)
        {
            sum+=a[i][sc];
            if(sum>sum1){
                sum1=sum;
                n1=sc;
            }
        }
        sc++;
        sum=0;
    }      
    }
    cout<<n1+1<<" "<<sum1<<endl;
    return 0;
}