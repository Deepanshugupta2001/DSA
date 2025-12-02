#include<iostream>
#include<cstring>
using namespace std;
void rotatestring(char a[],int n){
    cout<<"Original String: "<<a<<endl;
    int len_a=strlen(a);
    int i=len_a-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    cout<<"String After Shift: "<<a<<endl;
    i=len_a;
    int j=0;
    while(j<n){
        a[j]=a[i];
        i++;
        j++;
    }
    a[len_a]='\0';
    
}
int main(){
    char a[1000]="Coding";
    int n=4;
    n%=strlen(a);
    rotatestring(a,n);
    cout<<a<<endl;
    return 0;
}