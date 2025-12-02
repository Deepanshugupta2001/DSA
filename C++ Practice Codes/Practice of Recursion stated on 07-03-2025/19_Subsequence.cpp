#include<iostream>
using namespace std;
void subsequence(string &a,string &b,int i,int j){
    //base case
    if(a[i]=='\0') {
        b[j]='\0';
        cout<<b<<endl;
        return ;
    }

    //EK baar copy mat karo
    subsequence(a,b,i+1,j);
    //Ek baar copy karlo
    b[j]=a[i];
    subsequence(a,b,i+1,j+1);

}
int main(){
    string a,b;
    cin>>a;
    // b="";
    subsequence(a,b,0,0);
    return 0;
}