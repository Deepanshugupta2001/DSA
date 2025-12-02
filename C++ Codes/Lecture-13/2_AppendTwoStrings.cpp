#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000]="Hello";
    char b[]="World";
    /*Method 1:-
    int len_a=strlen(a);
    int len_b=strlen(b);
    int i=len_a,j=0;
    while(j<=len_b){
        a[i]=b[j];
        i++;
        j++;
    }
    */
   //Method 2:-
   strcat(a,b);
   cout<<a<<endl;
   return 0;
}