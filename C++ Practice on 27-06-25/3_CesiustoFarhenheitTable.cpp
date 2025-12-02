#include<iostream>
using namespace std;
int main(){
    int inti_f,final_f,step;
    cin>>inti_f>>final_f>>step;
    for (int i = inti_f; i <=final_f; i=i+step)
    {
        int deg=(5.0/9)*(i-32);
        cout<<i<<" "<<deg<<endl;
    }
    return 0;
    
}