#include<iostream>
using namespace std;

bool ratInMaze(char maze[][10],int i,int j,int n,int m,int sol[][100]){
    //base case
    if(i==n-1 and j==m-1){
        sol[i][j]=1;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return true;
    //return false;   // all the available options will be printed
     
  }
    //recursive case
    //Assume jaha khada hai voh solution ka part hai
    sol[i][j]=1;

    //Check Rightwards
    if(j+1<m and maze[i][j+1]!='X' and sol[i][j+1]!=1)
    {
        bool kyaRightSeRaastaMilla=ratInMaze(maze,i,j+1,n,m,sol);
        if(kyaRightSeRaastaMilla) return true;
    }
    //Check downwards
    if(i+1<n and maze[i+1][j]!='X' and sol[i+1][j]!=1){
        bool kyaNeecheSeRaastaMilla=ratInMaze(maze,i+1,j,n,m,sol);
        if(kyaNeecheSeRaastaMilla)
            return true;
    }
    //Check Upwards
    if(i-1>=0 and maze[i-1][j]!='X' and sol[i-1][j]!=1){
        bool kyaUparSeRaastaMilla=ratInMaze(maze,i-1,j,n,m,sol);
        if(kyaUparSeRaastaMilla) return true;
    }
    //Check Leftwards or Backwards
    if(j-1>=0 and maze[i][j-1]!='X' and sol[i][j-1]!=1){
        bool kyaPeechaSeRaaastaMila=ratInMaze(maze,i,j-1,n,m,sol);
        if(kyaPeechaSeRaaastaMila)  return true;
    }

    sol[i][j]=0;  //backtracking
    return false;
    
}

int main(){
    /*char maze[][5]={
        "0000",
        "00XX",
        "0000",
        "XX00",
    };

    int sol[5][5]={0};

    ratInMaze(maze,0,0,4,4,sol);*/

    char maze[][10]={
        "0X000",
        "0X0X0",
        "0X0X0",
        "000X0",

    };
    int sol[100][100]={0};

    ratInMaze(maze,0,0,4,5,sol);

    return 0;
}