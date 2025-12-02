#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char largest[1000],a[1000];
    int lar=0;
    int n;
    cin>>n;
    while(n--){
        cin.getline(a,1000);
        int len=strlen(a);
        if(len>lar){
            lar=len;
            strcpy(largest,a);
        }
    }
    cout<<largest<<endl;
    return 0;
}