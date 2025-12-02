#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *a){
    int i=0,j= strlen (a)-1;

    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
}
int main(){
    char a[1000]="NAMAN";

    if(isPalindrome(a))
    cout<<"Palindrome\n";
    else
    cout<<"Not A Palindrome\n";

    return 0;
}