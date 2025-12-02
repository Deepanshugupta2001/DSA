#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int n,m;
    cin>>n>>m;
    int number=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=number;
            number++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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
                cout<<"Key Found at ("<<i<<" , "<<j<<" ) position in the array"<<endl;
                break;
            }
        }
        
    }

    if(!keyMillgayi) cout<<"Key Not Found"<<endl;

    return 0;
    
}