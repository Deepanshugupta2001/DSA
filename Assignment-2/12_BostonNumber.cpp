#include<iostream>
using namespace std;
// int arr[1000]={0};
// int k=0;
int sum(int n){
    int b,c=0;
    while(n!=0){
        b=n%10;
        n/=10;
        c=c+b;
    }
    return c;
}

int prime(int n){
    bool kyaPrimehai;
    int ctr=0;
    int num;
    int pf=0;
    for( num = 2; num <= n; num++)
    {
        // kyaPrimehai=true;

            // arr[k]=num;
            while(n%num==0){
                n/=num;
                pf=pf+sum(num);
                // cout<<pf<<" ";
            }
            // k++;
    }

    return pf;
}

int main()
{
    int n,a,b,c;
    cin>>n;
    a=n;
    b=sum(n);
    c=prime(a);
    // cout<<c<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]!=0) cout<<arr[i]<<" ";
    // }
    // while(a!=0){
    // for (int j = 0; j < k; j++)
    // {
    //     do{
    //         if(a%arr[j]==0 and a>arr[j] and arr[j]!=0){
    //             a/=arr[j];
    //             c=c+sum(arr[j]);
    //         }
    //     }while(a%arr[j]==0);
    // }
    // // }

    if(b==c) cout<<"1"<<endl;
    else cout<<"0";
    
    return 0;

}