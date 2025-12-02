#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n],arr[n*n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int k=0;
    for (int j = n-1; j>=0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            arr[k]=a[i][j];
            k++;
        }
    }
    int l=0;
    int newa[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            newa[i][j]=arr[l];
            l++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<newa[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}