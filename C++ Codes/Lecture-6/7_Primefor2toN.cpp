#include<iostream>
using namespace std;
int main()
{
    int N,i,num;
    cin>>N;
    bool kyaNumPrimeHai;
    //Print all primes till N
    for(int num=2;num<=N;num++){
        // Only print num when its prime
        // num should not be divisible by number in range [2,num-1]
        kyaNumPrimeHai=true;
        for(i=2;i<=num-1;i++){
            if(num%i==0){
                kyaNumPrimeHai=false;
                break;
            }
        }

        //Agar num prime hai toh print kardo,else kuch mat karo
        if(kyaNumPrimeHai==true){
            cout<<num<<" ";
        }

        

    }
    
    
    return 0;
    /*int i=1;
    while(i<=5){
        if(i==3){
            continue;
        }
        cout<<i;
        i++;
    }*/
}