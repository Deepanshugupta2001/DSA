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
        //1.Print the first row
        for (int j = sc; j <=ec; j++)
        {
            cout<<a[sr][j]<<", ";
        }
        sr++;

        //2.Print the last column
        for (int i = sr; i <=er; i++)
        {
            cout<<a[i][ec]<<", ";
        }
        ec--;
        if(sr<=er){
        //3.Print the last row in reverse direction
        for (int j = ec; j >=sc; j--)
        {
            cout<<a[er][j]<<", ";
        }
        er--;
         
        //4.Print the first column in reverse direction
        for (int i = er; i >=sr; i--)
        {
            cout<<a[i][sc]<<", ";
        }
        sc++;
    }
    }
    cout<<"END"<<endl;
    return 0;
}