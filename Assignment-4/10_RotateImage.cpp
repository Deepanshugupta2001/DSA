#include<iostream>
using namespace std;
int main(){
    int n,a[1000][1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int sr=0,sc=0,er=n-1,ec=n-1;
    while(er>=sr and ec>=sc){
        //1.Printing 1st row
    for (int i = 0; i < n; i++)
    {
            cout<<a[i][ec]<<" ";        
    }
    ec--;
    cout<<endl;

    //2.Printing 2nd row
    for (int i = 0; i < n; i++)
    {
        cout<<a[i][ec]<<" ";
    }
    ec--;
    cout<<endl;

    //3.Printing 3rd row
    for (int i = 0; i < n; i++)
    {
        cout<<a[i][ec]<<" ";
    }
    ec--;
    cout<<endl;

    //4.Printing 4th row
    for (int i = 0; i < n; i++)
    {
        cout<<a[i][sc]<<" ";
    }
    sc++;
    ec--;
    cout<<endl;
    
    
    
    }
    return 0;
    
}