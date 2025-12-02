/*#include<iostream>
using namespace std;
int ctr=0;
bool isSafe(int r,int c,int n,bool board[15][15]){
    int row=r,col=c;


    //recursive case
    //upar ka dekh lete hai
    for (int i = 0; i < r; i++)
    {
        
        if(board[i][c]!=1) return true;
    }
    //Left diagonal delh lete hai
    while(r>=0 and c>=0){
        if(board[r-1][c-1]!=1){
            return true;
            r--;
            c--;
        } 
    }
    //Right diagonal dekh lete hai
    r=row,c=col;
    while(r>=0 and c<n){
        if(board[r-1][c+1]!=1){
            return true;
            r--;
            c++;
        }
    }

    return false;
}

bool NQueen(int i,int j,int n,bool board[15][15]){
    //base case
    if(i==n and j==n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(board[i][j]==1) cout<<"Q";
            else cout<<"_";
        }
        cout<<endl;
    }
    // ctr++;
    }
    // board[i][j]=0;
    return false;

    //recursive case
    for (int j = 0; j < n;j++){
        if(isSafe(i,j,n,board)){
        {
             board[i][j]=1;
            if(NQueen(i+1,j,n,board)) return true;       
            
            }
        }
        board[i][j]=0;

        
    }

    return false;

}
int main(){
    int n;
    cin>>n;
    // int i=0;
    // int j=0;
    bool board[15][15];
    NQueen(0,0,n,board);
    cout<<ctr<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int ctr=0;
bool isSafe(int r,int c,int n,bool board[15][15]){
    int row=r,col=c;


    //recursive case
    //upar ka dekh lete hai
    for (int i = 0; i < r; i++)
    {
        
        if(board[i][c]==1) return false;
    }
    //Left diagonal delh lete hai
    while(r>=0 and c>=0){
        if(board[r-1][c-1]==1){
            return false;
            r--;
            c--;
        } 
    }
    //Right diagonal dekh lete hai
    r=row,c=col;
    while(r>=0 and c<n){
        if(board[r-1][c+1]==1){
            return false;
            r--;
            c++;
        }
    }

    return true;
}

bool NQueen(int i,int j,int n,bool board[15][15]){
    //base case
    if(i==n and j==n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(board[i][j]==1) cout<<"Q";
            else cout<<"_";
        }
        cout<<endl;
    }
    // ctr++;
    }
    // board[i][j]=0;
    return false;

    //recursive case
    for (int j = 0; j < n;j++){
        if(isSafe(i,j,n,board)){
        {
             board[i][j]=1;
            if(NQueen(i+1,j,n,board)) return true;       
            
            }
        board[i][j]=0;

        }

        
    }

    return false;

}
int main(){
    int n;
    cin>>n;
    // int i=0;
    // int j=0;
    bool board[15][15]={0};
    NQueen(0,0,n,board);
    // cout<<ctr<<endl;
    return 0;
}