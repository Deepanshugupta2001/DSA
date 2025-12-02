#include<iostream>
#include<cstring>
using namespace std;
void rotateString(char *a,int n){
    cout<<"Original String: "<<a<<endl;
    int len_a=strlen(a);
    int i=len_a-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    cout<<"Intermediate String: "<<a<<endl;
    cout<<"Length of A is: "<<len_a<<endl;
    i=len_a;
    int j=0;
    while (j<n)
    {
        cout<<"COnversion Started: ";

        a[j]=a[i];
        cout<<a<<" : "<<a[i]<<" : "<<a[j]<<endl;

        i++;
        j++;
    }
    a[len_a]='\0';
    cout<<"Updated String: "<<a<<endl;
}
int main(){
    char a[100];
    cin>>a;
    int n;
    cin>>n;
    n=n%strlen(a);
    rotateString(a,n);
    return 0;
}