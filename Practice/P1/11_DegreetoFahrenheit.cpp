#include<iostream>
using namespace std;
int main(){
    int f_initial,f_final,step,c;
    cin>>f_initial>>f_final>>step;
    while(f_initial<=f_final){
        c=5/9.0*(f_initial-32);
        cout<<f_initial<<" "<<c<<endl;
        f_initial+=step;
    }
    
}