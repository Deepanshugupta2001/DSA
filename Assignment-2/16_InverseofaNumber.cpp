#include<iostream>
using namespace std;
int main(){
    
    int n,n1;
    cin>>n;
    n1=n;
    int ctr=0;
    int a[100],b[100];
    int i=1;
    while(n!=0 && i<=n1){
        int index=n%10;
        n/=10;
        a[index]=i;
        i++;
        ctr++;       
        
    }
    int j;
    for (int k=ctr, j=0; k>=0 and j<ctr; k--, j++)
    {
        b[j]=a[k];
    }
    for (int i = 0; i < ctr; i++)
    {
        n=10*n+b[i];
    }
    
    cout<<n<<endl;
    return 0;
    
    // int a[100];
    // int n,b=0,n1=0,c=0;
    // cin>>n;
    // c=n;
    // while(n!=0){
    //     b=n%10;
    //     n/=10;
        
    //     n1++;}
    // n=c;
    // while(n!=0){
    //     b=n%10;
    //     n/=10;
               
    // for (int i = n1-1; i >=0; i--)
    // {
    //     a[i]=b;
    // }
    // }
    // for (int i = 0; i < n1; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    /*int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }*/
    // cout<<endl;
    // return 0;
}
