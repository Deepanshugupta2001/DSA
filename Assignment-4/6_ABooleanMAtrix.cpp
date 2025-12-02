#include<iostream>
using namespace std;
int main(){
    int a[1000][1000];
    int n,m;
    cin>>n>>m;
    bool row[1000]={0},col[1000]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==1){
                row[i]=1;  
                col[j]=1;

        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                if(row[i]==1) a[i][j]=1;
                if(col[j]==1) a[i][j]=1;
        }
        
    }
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    

}
}