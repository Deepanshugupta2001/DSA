#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1-i; j++)
            {
                string a=s[j]+s[j+1];
                string b=s[j+1]+s[j];
                if(a>b) swap(s[j],s[j+1]);
            }
            
        }

        for (int i = n-1; i >=0; i--)
        {
            cout<<s[i];
        }
        cout<<endl;
        
        
    }
}