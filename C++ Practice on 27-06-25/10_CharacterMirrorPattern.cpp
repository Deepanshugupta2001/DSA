#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char ch='A';
        for (int j = n-i; j >0 ; j--)
        {
            cout<<ch;
            ch=ch+1;
        }
            ch=ch-1;

        for (int k = n-i; k >0; k--)
        {
            cout<<ch;
            ch=ch-1;
        }
        
        cout<<endl;
        
    }
    for (int i = 2; i <=n; i++)
    {
        char ch='A';
        for (int j = 1; j <=i; j++)
        {
            cout<<ch;
            ch+=1;
        }
        ch-=1;
        for (int j = 0; j <i; j++)
        {
            cout<<ch;
            ch-=1;
        }
        cout<<endl;
    }
    return 0;
}