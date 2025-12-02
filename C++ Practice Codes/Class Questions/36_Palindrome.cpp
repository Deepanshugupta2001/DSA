#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char a[]){
    int i=0,j=strlen(a)-1;
    bool flag=true;
    while(i<j){
        if(a[i]!=a[j]){
            flag=false;
            break;
        };
        i++;
        j--;
    }
    return flag;
}
int main(){
    char a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]='\0';
    if(palindrome(a))  cout<<"Palindrome \n";
    else        cout<<"Not a Palindrome \n";

    return 0;
}