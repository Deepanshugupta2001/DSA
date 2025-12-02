// #include<iostream>
// #include<vector>
// using namespace std;
// void binarystring(string &s,string &y,int i,vector<char> &v){
//     //base case
//     if(s[i]=='\0'){
//         for (int j = 0; y[j]!='\0'; j++)
//         {
//             cout<<y[j];
//         }
//         // for (int m = 0; m<s.size(); m++)
//         // {
//         //     cout<<s[m];
//         // }
        
//         // for (int k = 0; k < v.size(); k++)
//         // {
//         //     cout<<v[k];
//         // }
        
//         cout<<" ";
//         return ;
        
//     }

//     //recursive case
//     if(s[i]==1 || s[i]==0){
//         y=y+s[i];
//         // v.push_back(s[i]);
//         binarystring(s,y,i+1,v);
//     }
//     // if(s[i]!=1 and s[i]!=0){
//     else if(s[i]=='?'){
//         //Ek baar 1 ko put kardo
//         y[i]='1';
//         y=y+y[i];
//         // s[i]='1';
//         // v.push_back(s[i]);
//         binarystring(s,y,i+1,v);
//         // v.pop_back();

//         //ek baar 0 ko put kardo
//         y=y+'0';
//         // y[i]='0';
//         // y=y+y[i];
//         // s[i]='0';

//         // v.push_back(y[i]);
//         binarystring(s,y,i+1,v);
//         // v.pop_back();

//     }
// }

// int main(){
//     // char s[30],y[30];
//     string s,y;
//     cin>>s;
//     vector<char> v;
//     binarystring(s,y,0,v);
//     return 0;
// }

#include<iostream>
using namespace std;
void binstring(string &s,string &ans,int index){
    if(s[index]=='\0') {
        ans[index] = '\0';
        cout<<ans<<" ";
        return ;
    }

    if(s[index]!='?'){
        ans[index]=s[index];
        binstring(s,ans,index+1);
    }
    else{
        ans[index]='0';
        binstring(s,ans,index+1);

        ans[index]='1';
        binstring(s,ans,index+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        binstring(s,ans,0);
    }
    return 0;
}