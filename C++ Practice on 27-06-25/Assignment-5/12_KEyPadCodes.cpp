#include<iostream>
using namespace std;
int ctr=0;
char a[][5]={
    "","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"
};
void keypad(string &s,int i,int j,int n,string& ip){
    if(i==n){
        // ip[j]='\0';
        for (int m = 0; m < j; m++)
        {
            cout<<ip[m];
        }
        cout<<" ";
        // cout<<ip<<" ";
        ctr++;
        return;
    }

    int digit=s[i]-'0';
    // cout<<digit<<endl;
    for (int k = 0; k< a[digit][k]; k++)
    {
        // cout<<"Yeh aa raha hai:-"<<a[digit][k]<<endl;
        ip[j]=a[digit][k];
        // cout<<"Input me yeh aaya: "<<ip[j]<<endl;
        keypad(s,i+1,j+1,n,ip);
        // ip[j]-=a[digit][k];
        // ip.pop_back();
    }
    
}
int main(){
    string s,ip;
    cin>>s;
    int n=s.size();
    keypad(s,0,0,n,ip);
    cout<<endl<<ctr<<endl;
    return 0;
}