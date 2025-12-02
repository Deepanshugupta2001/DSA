// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int reversenumber(int n){
//     int a=0,d=0;
//     while(n--){
//     a=n%10;
//     n=n/10;
//     d=10*d+a;
//     }
//     return d;
// }
// void print(vector<int> v){
//     // sort(v.begin(),v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return;
// }
// void lexo(int n,vector<int> &v){
//     //base case
//     if(n==0) {
//         v.push_back(n);
//         return;
//     }

//     //recursive case
//     lexo(n-1,v);
    
//     v.push_back(reversenumber(n));

// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     lexo(n,v);
//     print(v);
// }

#include<bits/stdc++.h>
// #include<cstring>
using namespace std;
void lexi(int n,string &s,int i,bool dp){
    if(stoi(s)>n) return ;

    if(stoi(s)<=n) cout<<stoi(s)<<" ";
    int start;
    if(dp) start=0;
    else start=1;

    for (int d = start; d <=9; d++)
    {
        s.push_back('0'+d);
         cout<<s<<endl;
        lexi(n,s,i+1,true);
        s.pop_back();
    }
    
}
int main(){
    int n;
    cin>>n;
    string s;
    cout<<"0"<<" ";
    lexi(n,s,0,false);
    return 0;
}

// #include<iostream>
// using namespace std;
// void printAll(int i,int n){

//     if(i>n) return;

//     cout<<i<<" ";

//     for (int append = 0; append <=9 ; append++)
//     {
//         printAll(i*10+append,n);
//     }
    
// }
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i <=9; i++)
//     {
//         printAll(i,n);
        
//     }
//     return 0;
// }