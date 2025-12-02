#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000],b[1000];
    cin.getline(a,1000);
    cin.getline(b,1000);
    // Method 1:-
    // int i=strlen(a),j=0;
    // while(j<=strlen(b)){
    //     a[i]=b[j];
    //     i++;
    //     j++;
    // }
    strcat(b,a);
    cout<<b<<endl;
    return 0;
}