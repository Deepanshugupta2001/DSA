#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int amount,choice,ctr=0;
        cin>>amount>>choice;
        // for (int i = 0; i < n; i++)
        // {
        //     if(amount==(a[i]*i)){
        //         ctr++;
        //     }
        // }
        // if(ctr==choice) cout<<"Yes"<<endl;
        // else cout<<"No"<<endl;
        for (int k = 0; k < n; k++)
        {
            if(amount>=a[i]){
                amount-=a[i];
                ctr++;
            }
                
        }
        if(choice==ctr) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;        
    }

    return 0;  
    
}