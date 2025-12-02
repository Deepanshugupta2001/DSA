#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int sr=0,er=m-1,sc=0,ec=n-1;
    while(sr<=er and sc<=ec){
        //1.Printing first column
        for (int i = sr; i <=er; i++)
        {
            cout<<a[i][sc]<<", ";
        }
        sc++;
        //2.Printing Last Row
        for (int j = sc; j <= ec; j++)
        {
            cout<<a[er][j]<<", ";
        }
        er--;
        //3.Printing Last Column 
        for (int i = er; i >=sr; i--)
        {
            cout<<a[i][ec]<<", ";
        }
        ec--;
        //4.Printing first row
        for (int j = ec; j >=sc; j--)
        {
            cout<<a[sr][j]<<", ";
        }
        sr++;
        
        
    }
    cout<<"END"<<endl;
    return 0;
}