#include<iostream>
using namespace std;
bool ratinmaze(char maze[][5],int sol[][5],int i,int j,int n,int m){
    //base case
    if(i==n-1 and j==m-1){
        sol[i][j]=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        sol[i][j]=0;

        // return true;
        return false;
    }

    //recursive case
    sol[i][j]=1;
    if(j+1<m and maze[i][j+1]!='X' and sol[i][j+1]!=1){
        bool kyaRightSeRaastaMila=ratinmaze(maze,sol,i,j+1,n,m);
        if(kyaRightSeRaastaMila) return true;
    }

    if(i+1<n and maze[i+1][j]!='X' and sol[i+1][j]!=1){
        bool kyaNeecheSeRaastaMIla=ratinmaze(maze,sol,i+1,j,n,m);
        if(kyaNeecheSeRaastaMIla) return true;
    }

    if(i-1>=0 and maze[i-1][j]!='X' and sol[i-1][j]!=1){
        bool kyaUparSeRaastaMila=ratinmaze(maze,sol,i-1,j,n,m);
        if(kyaUparSeRaastaMila) return true;
    }

    if(j-1>=0 and maze[i][j-1]!='X' and sol[i][j-1]!=1){
        bool kyaLeftSeRaastaMIla=ratinmaze(maze,sol,i,j-1,n,m);
        if(kyaLeftSeRaastaMIla) return true;
    }
    sol[i][j]=0;
    return false;
}
int main(){
    char maze[][5]={
        "0000",
        "00XX",
        "0000",
        "XX00",
    };
    int sol[5][5]={0};
    ratinmaze(maze,sol,0,0,4,4);
}