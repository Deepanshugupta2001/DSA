#include<iostream>
using namespace std;
bool isSafe(int row,int col,int n,int board[][100]){
    int o_r=row,o_c=col;
    //Upar check karna hai
    for (int i = 0; i < row; i++)
    {
        if(board[i][col]) return false;
    }
    //Left Diagonal check karna hai
    while(row>=0 and col>=0){
        if(board[row--][col--]) return false;
    }
    row=o_r,col=o_c;
    while(row>=0 and col<n){
        if(board[row--][col++]) return false;
    }

    return true;
    
}
bool NQueen(int n,int board[][100],int row){
    //base case
    if(row==n){
        //Print the board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(board[i][j]==1) cout<<"Q";
                else cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;

    }
    //recursive case
    //ith row ka kaam hum kardete hai and baaki rows ka kaam recursion karega
    for (int col = 0; col < n; col++)
    {
        if(isSafe(row,col,n,board)){
            board[row][col]=1;
            bool kyaBakiPlaceHui=NQueen(n,board,row+1);
            if(kyaBakiPlaceHui) return true;
        }
        board[row][col]=0;
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    int board[100][100]={0};
    NQueen(n,board,0);
    return 0;

}