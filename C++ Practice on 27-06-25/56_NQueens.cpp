#include<iostream>
using namespace std;
bool isSafe(int row,int col,int n,int board[][100]){
    int o_r=row,o_c=col;
    for (int i = 0; i < row; i++)
    {
        if(board[i][col]) return false;
    }

    while(row>=0 and col>=0){
        if(board[row--][col--]) return false;
    }
    row=o_r,col=o_c;
    while(row>=0 and col<n){
        if(board[row--][col++]) return false;
    }

    return true;
}
bool nqueens(int n,int row,int board[][100]){
    //base case
    if(row==n){
        // cout<<"Yeh printing loop ma aa gaya hai"<<endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(board[i][j]==1) cout<<"Q ";
                else cout<<"_ ";
            }
            cout<<endl;            
        }
        cout<<endl;
        return false;
    }

    //recursive case
    // cout<<"Yeh "<<row<<" times chal raha hai"<<endl;
    for (int col = 0; col < n; col++)
    {
        if(isSafe(row,col,n,board)){
            board[row][col]=1;
            bool bakiqueenplacehui=nqueens(n,row+1,board);
            if(bakiqueenplacehui) return true;
            board[row][col]=0; 
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int board[100][100]={0};
    nqueens(n,0,board);
    return 0;
}