#include<iostream>
#include<algorithm>
using namespace std;
// void bubbleSort(int *a[])
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<endl;
   int sr=0,sc=0,er=n-1,ec=n-1;
   while(sr<=er){
    for (int i = 0; i < m; i++)
    {
        //sort(a[i],a[i]+m);
        for (int j = 0; j < m-1; j++)
        {
            if(a[sr][j]>a[sr][j+1]){
                // cout<<a[sr][j+1]<< " ____  ";
                swap(a[sr][j],a[sr][j+1]);
            }
        }
        
    }
    sr++;
    
   }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
    
    
}