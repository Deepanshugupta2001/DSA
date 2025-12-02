#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000]="Hello ";
    char b[100]="World";
    /*int len_a=strlen(a);
    int len_b=strlen(b);
    int i=strlen(a),j=0;
    while(j<=len_b){
        a[i]=b[j];
        i++;
        j++;
    }*/
    strcat(a,b);
    cout<<a<<endl;
    return 0;
}