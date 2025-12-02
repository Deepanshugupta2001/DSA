#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i < n/2+1; i++)
    {
        cout<<"*";
        for (int j = 1; j <n/2; j++)
        {
            cout<<" ";
        }
        
        // cout<<" ";
        if(i==1){
            for (int j = 1; j <=n/2+1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            cout<<"*";
            cout<<endl;
        }

    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for (int i = 1; i <=n/2; i++)
    {
        for (int j = 1; j <=n/2; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int j = 1; j < n/2; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
        
        
    }
    for (int i = 1; i <=n/2+1; i++)
    {
        cout<<"*";
    }
    for (int i = 1; i < n/2; i++)
    {
        cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    
    return 0;
}