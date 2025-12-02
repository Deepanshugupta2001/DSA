#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void permutations(string &a,string &b,int i,vector<string> &v){
    if(a[i]=='\0'){
        if(a>b) v.push_back(a);
        return;
    }

    for (int j = i; a[j]!='\0'; j++)
    {
        swap(a[i],a[j]);
        permutations(a,b,i+1,v);
        swap(a[i],a[j]);

    }
    
}
int main(){
    string a,b;
    cin>>a;
    vector<string> v;
    b=a;
    permutations(a,b,0,v);
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}