#include<iostream>
using namespace std;
int main(){

    char a[100][100];
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    // bool ctr=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]=='.'){
                
                s= (j == 0) ? s - 2 : s-3;
                cout<<s<<" ";
                //break;
            }
            else if(a[i][j]=='*'){

                s=(j==0) ? s+5: s+4;
                cout<<s<<endl;
                //break;
            }
            else if (a[i][j]=='#')
            {
                s=s-1;
                break;
            } 
            // else if(a[i][j]=='.' and j==n-1){
            //     s=s-2;
            //     cout<<s<<" ";
            //     //break;
            // }  
            
            if(s<k){
                cout<<"No"<<endl;
                return 0;
    }
        }
        cout<<s<<endl;
        
    }
    
    
    
    // if(ctr){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    // }
    

    return 0;
    
}