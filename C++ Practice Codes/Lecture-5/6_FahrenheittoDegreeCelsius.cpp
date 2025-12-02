#include<iostream>
using namespace std;
int main()
{
    int initial_f,final_f,c,step;
    cin>>initial_f>>final_f>>step;

    int i=1;
   
    while(initial_f<=final_f){

        c=(5.0/9)*(initial_f-32);
        cout<<initial_f<<"  "<<c;
        initial_f=initial_f+step;
        cout<<endl;
    }
}