// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // int a[100000],b[100000];
//     vector<int> v;
//     int i=0;
//     if(n==0) {
//         string s="";
//         s+=n;
//         cout<<s<<endl;
//     }
//     while(n){
//         cout<<"Yeh loop ma enter hua hai"<<endl;
//         int digit=n%10;
//         cout<<"Digit is: "<<digit<<endl;
//         // a[i]=digit;
//         v.push_back(digit);
//         // cout<<"Number now is: "<<n<<endl;
        
//         n/=10;
//         i++;
//         // cout<<a[i]<<" : "<<i<<endl;
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i];
//     }
//     cout<<endl;
//     // for (int k = 0; k < i; k++)
//     // {
//     //     cout<<a[i];
//     // }
//     // cout<<endl;
//     // cout<<s<<endl;
//     // for (int i = 0; i < s.size(); i++)
//     // {
//     //     cout<<s[i];
//     // }
//     cout<<endl;
//     return 0;
// }

#include<iostream>
#include<cstring>
using namespace std;
void replace(string &s,string &ans,int i){
    if(i==s.size()){
        cout<<ans<<endl;
        return ;
    }
    if(s[i]=='0'){
        ans+='5';
        replace(s,ans,i+1);
    }
    else{
        ans+=s[i];
        replace(s,ans,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    string s,ans;
    s=to_string(n);
    replace(s,ans,0);
    return 0;
}