#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    bool milgaya=false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]==key){
                milgaya=true;
                break;
            }
        }
    }
    cout<<milgaya<<endl;
    return 0;    
}