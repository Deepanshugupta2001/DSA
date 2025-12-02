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
    int t;
    cin>>t;
    while(t--){
        int amount;
        cin>>amount;
        int min;
        cin>>min;
        int itnahai=0;
        for (int i = 0; i < n; i++)
        {
            if(amount%a[i]==0){
                itnahai++;
            }
        }
        if(itnahai>=min) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}