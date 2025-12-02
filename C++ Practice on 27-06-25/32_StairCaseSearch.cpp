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
    int i=0,j=n-1;
    int key;
    cin>>key;
    bool milgaya=false;
    while(i<n and j>=0){
        if(key==a[i][j]){
            cout<<key<<" found at "<<i<<" , "<<j<<endl;
            milgaya=true;
            break;
        }
        else if(key>a[i][j]){
            i++;
        }
        else j--;
    }   
    if(milgaya==false) cout<<"Not Found"<<endl;
    return 0;
}