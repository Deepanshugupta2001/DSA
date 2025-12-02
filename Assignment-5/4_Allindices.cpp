#include<iostream>
using namespace std;
int allindices(int *a,int n,int m,int k){
    //base case
    if(n==-1) return -1; 
    //recursive case
     allindices(a,n-1,m,k);
    if(a[n]==m) cout<<n<<" ";
    return n;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    
    allindices(a,n,m,n);
    
}