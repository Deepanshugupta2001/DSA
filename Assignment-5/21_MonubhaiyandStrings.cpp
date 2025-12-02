// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cstring>
// using namespace std;
// bool isSafe(int j,string &y,string &s){
//     bool Safe=true;
//     for (int k=0;  k<j; k++)
//     {
//         if(y[k]==s[j] and j!=0){
//             Safe=false;
//             break;
//         }
//     }
//     if(Safe) return true;
//     else return false;
// }

// vector<char> v;
// void strings(string &s,string &y,int i){
//     //base case
//     if(s[i]=='\0'){
//         // if(cmp(s,y)){
// 			// }
//         for (int i = 0; i < y.size(); i++)
//         {
//             // cout<<y[i];
//              v.push_back(y[i]);

//         }
        
//         return;
//     }

//     //recursive case
//     if(s[i]!='\0' and i<s.size()){
//         if(isSafe(i,y,s) and ((int)(s[i])>=97 || (int)(s[i])<=122)){
//             y=y+s[i];
//             strings(s,y,i+1);
//         }
//         else{
//             strings(s,y,i+1);
//         }
//     }
// }
// int main(){
//     string s,y;
//     cin>>s;
//     strings(s,y,0);
//     sort(v.begin(),v.end());
// 	for(int i=0; i<v.size(); i++){
// 		cout<<v[i];
// 	}
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string sub= s.substr(i, j-i+1);
        }
    }

}