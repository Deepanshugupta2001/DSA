#include<iostream>
using namespace std;
bool ratInmaze(char maze[][5],int i,int j,int n,int m,int sol[][5]){
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
        // sol[i][j]=0;
        return true;
        // return false;  //To print all the possible combinations of sol matrix
    }

    //recursive case

    sol[i][j]=1;
    //check rightwards
    if(j+1<m and maze[i][j+1]!='X' and sol[i][j+1]!=1){
        bool kyaRightSeRaastaMilla=ratInmaze(maze,i,j+1,n,m,sol);
        if(kyaRightSeRaastaMilla) return true;
    }

    //check downwards
    if(i+1<n and maze[i+1][j]!='X' and sol[i+1][j]!=1){
        bool kyaNeecheseRaastaMilla=ratInmaze(maze,i+1,j,n,m,sol);
        if(kyaNeecheseRaastaMilla) return true;
    }

    //check leftwards
    if(j-1>=0 and maze[i][j-1]!='X' and sol[i][j-1]!=1){
        bool kyaLeftSERaastaMilla=ratInmaze(maze,i,j-1,n,m,sol);
        if(kyaLeftSERaastaMilla) return true;
    }

    //check upwards
    if (i-1>=0 and maze[i-1][j]!='X' and sol[i-1][j]!=1){
        bool kyaUparSeRaastaMilla=ratInmaze(maze,i-1,j,n,m,sol);
        if(kyaUparSeRaastaMilla) return true;
    }
    
    sol[i][j]=0;
    return false;
}

int main(){
    char maze[][5]={
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    int sol[5][5]={0};
    ratInmaze(maze,0,0,4,4,sol);
    return 0;

}