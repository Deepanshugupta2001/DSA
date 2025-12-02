#include<iostream>
using namespace std;
void permutations(char* a,int i){
    //base case
    if(a[i]=='\0'){
        cout<<a<<endl;
        return ;
    }

    //recursive case
    for (int j = i; a[j]!='\0'; j++)
    {
        swap(a[i],a[j]);
        permutations(a,i+1);
        swap(a[i],a[j]);   //Backtracking
    }
    
}

void permutatonswb(string ip,string op){
    //base case
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }

    //recursive case
    for (int i = 0; i < ip.size(); i++)
    {
        permutatonswb(ip.substr(0,i)+ip.substr(i+1),op+ip[i]);
    }
    
}
int main(){
    char a[]="abc";
    //permutations(a,0);
    permutatonswb("abc","");
    return 0;
}