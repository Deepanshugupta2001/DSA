#include<iostream>
using namespace std;
bool ratinMaze(int i,int j,int n,int m,char maze[1000][1000],int sol[1000][1000]){
    if(i==n-1 and j==m-1){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<sol[i][j];
                
            }
            cout<<endl;
        }
        
    }

    return true;
    //recursive case
    sol[i][j]=1;
    //rightwards check kar raha hai
    if(j+1<m and maze[i][j+1]!='X'){
        return true;
        ratinMaze(i,j+1,n,m,maze,sol);
    }
    if(i+1<n and maze[i+1][j]!='X'){
        return true;
        ratinMaze(i+1,j,n,m,maze,sol);
    }

    sol[i][j]=0;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    char maze[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>maze[i][j];
        }
        
    }
    int sol[1000][1000]={0};
    // ratinMaze(0,0,n,m,maze,sol);
    return 0;
    
}