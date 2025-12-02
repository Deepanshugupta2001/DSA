#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;    
    
}