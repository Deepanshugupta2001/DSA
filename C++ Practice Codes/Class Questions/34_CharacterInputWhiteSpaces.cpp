#include<iostream>
using namespace std;
void readstring(char a[],int n,char delimiter){
    int i=0,ctr=0;
    char ch;
    ch=cin.get();
    while (i < n-1 and ch != delimiter)   
    {
        a[i]=ch;
        i++;
        ctr++;
        ch=cin.get();
    }
    a[i]='\0';
    cout<<"The no. of characters are: "<<ctr<<endl;

    
}
int main(){
    char a[500];
    readstring(a,500,'%');
    //cin.getline(a,500,'%');
    cout<<a<<endl;
    return 0;

}