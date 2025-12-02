#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=INT_MIN;
    for (int i = 0; i < t; i++)
    {
        int n,m;
        cin>>n>>m;
        int num1[10000],num2[10000];
        for (int i = 0; i < n; i++)
        {
            cin>>num1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>num2[i];
        }
        int sum1=0,sum2=0;
        for (int i = 0; i < n; i++)
        {
            sum1+=num1[i];
        }
        for (int i = 0; i < m; i++)
        {
            sum2+=num2[i];
        }
        int j=0;
        int sum3=0,sum4=0,sum5=0;

        for (int i = 0 ; i < n and j<m; i++ and j++)
        {
            while(num1[i]!=num2[j]){
                sum3+=num1[i];
                sum4+=num2[j];
                
            }
            if(num1[i]==num2[j]){
                if(sum4>sum3){
                    sum5+=sum4;
                    sum4=0;
                }
                else{
                    sum5+=sum3;
                    sum3=0;
                }
                sum5+=num1[i];
            }

        }
        if(sum1>sum){
            sum=sum1;
        }
        if (sum2>sum)
        {
            sum=sum2;
        }
        if(sum5>sum){
            sum=sum5;
        }
        
        cout<<sum<<endl;  
    }
     return 0;
}