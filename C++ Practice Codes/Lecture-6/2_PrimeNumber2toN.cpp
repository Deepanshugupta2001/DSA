#include<iostream>
using namespace std;
int main()
{
    int i,N,num;
    cin>>N;
    bool kyaPrimehaiN;
    for(int num=2;num<=N;num++){
        kyaPrimehaiN=true;
        for(int i=2;i<=num-1;i++){
            if(num%i==0){
                kyaPrimehaiN=false;
            }

        

        }

        if(kyaPrimehaiN==true)
        {
            cout<<num<<"  ";
        }
        
    }
}