#include<iostream>
using namespace std;
int twins(string &s,int i,int &ctr){
    //base case
    if(i==s.size()-1){
        return ctr;
    }
    //recursive case
    if(s[i]==s[i+2]) {
        ctr++;
    }
        twins(s,i+1,ctr);

}
int main(){
    string s;
    cin>>s;
    int ctr=0;
    cout<<twins(s,0,ctr)<<endl;
    return 0;
}