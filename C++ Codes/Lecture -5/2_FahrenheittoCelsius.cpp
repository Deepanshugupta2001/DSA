#include<iostream>
using namespace std;
int main()
{
    //int n,i;
    int f,c,f_initial,f_final,step;
    /*i=1;
    cin>>n;
    cin>>f;*/
    cin>>f_initial>>f_final>>step;
    f=f_initial;
    //while(i<=n)
    //while(f<=300)
    while(f<=f_final)
    {
        
        c=(5.0/9)*(f-32);
        cout<<f<<"  "<<c;
        cout<<endl;
        f=f+step;
        //f=f+20;
        //i=i+1;
    }
    return 0;
}