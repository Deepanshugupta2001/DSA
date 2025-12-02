#include<iostream>
using namespace std;
int ctr=0;
void count(string a,string &s,string &y,int i,int j,int k){
    // string s;
    //base case
    if(a[i]=='\0'){
        cout<<ctr<<endl;

        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        for (int k = 0; k < y.size(); k++)
        {
            cout<<y[k];
        }
        
           
        return ;
    }

    //recursive case
    //ek baar hi ko hum count karlete hai baaki time fir recursion karega
    if(a[j]!='\0' and a[i]=='h' and a[j]=='i' and a[k]!='t'){
            ctr++;
            y=y+'b';
            y=y+'y';
            y=y+'e';
            count(a,s,y,i+2,j+2,k+2);
            /*int m;
            for (int k = i and m =j; a[k]!='\0' and a[m]!='\0'; k++ and m++)
            {           
            a[i]=a[i+2];
            a[j]=a[j+2];
            }*/
        }
    else if(a[i]!='\0' and a[i]!='h' and a[j]!='i' ){
        s=s+a[i];
        y=y+a[i];
        count(a,s,y,i+1,j+1,k+1);
    }
    else if(a[i]!='\0' and a[i]=='h' and a[j]=='i' and a[k]=='t' ){
        s=s+a[i];
        y=y+a[i];
        count(a,s,y,i+1,j+1,k+1);
    }
}
int main(){
    string a,s,y;
    cin>>a;
    int i=0,j=i+1,k=j+1;
    // cout<<a.size();
    count(a,s,y,i,j,k);
    // cout<<ctr<<endl;
    // cout<<a<<endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i];
    // }
    // cout<<endl;
    
    return 0;
}