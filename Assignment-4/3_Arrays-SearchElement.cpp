#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            
        }
    }
    
    int key;
    cin>>key;
    bool keyMillgayi=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==key){
                keyMillgayi=true;
                break;
            }
        }
        
    }

    if(keyMillgayi) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
    
}