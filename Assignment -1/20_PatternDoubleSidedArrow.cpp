#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;   
    for(int i = 1; i <=n/2; i++){
        for (int j =n-(2*i-1); j >0; j--)
        {
            cout<<"_ ";
        }

        if(i==1) cout<<"1";

        if(i>1){
        for (int o = i; o>0; o--)
        {
            cout<<o<<" ";
        }
        for (int p = 1; p <=(2*i-3); p++)      
        {
                cout<<"_ ";            
        }
        for (int a = 1; a <=i ; a++)
        {
                cout<<a<<" ";          
        }
        }
        cout<<endl;
    }
   
    for (int i = (n/2)+1; i >0; i--)
    {
        if(i!=(n/2)+1){
        for (int j =n-(i-1)-1; j >0; j--)
        {
            cout<<"_ ";
        }
        }
        if(i>1){
        for (int d = i; d>0; d--)
        {
            cout<<d<<" ";
        }
        for (int e =(2*i-3) ; e >0; e--)      
        {
                cout<<"_ ";            
        }
        for (int f = 1; f <=i ; f++)
        {
                cout<<f<<" ";          
        }
        }

        if(i==1) cout<<"1";

        cout<<endl;
    }
}
