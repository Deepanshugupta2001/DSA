#include<iostream>
using namespace std;
bool isSorted(int *a,int n){
    //base case
    if(n==0||n==1) return true;

    //recursive case
    bool kyaChotaSortedHai=isSorted(a+1,n-1);
    if(a[0]<a[1] and kyaChotaSortedHai){
        return true;
    }
    else{
        return false;
    }
}

bool isSorted2(int *a,int n){
    //base case
    if(n==0 || n==1) return true;

    // recursive case
    bool kyaChotaSortedHai=isSorted2(a,n-1);
    if(kyaChotaSortedHai and a[n-2]<=a[n-1]){
        return true;
    }
    else return false;
}

bool isSorted3(int *a,int n,int i){
    //base case
    if(i==n-1 ||i==n) return true;
    //recursive case
    bool kyaChotaSortedHai=isSorted3(a,n,i+1);
    if(kyaChotaSortedHai and a[i]<=a[i+1]) return true;
    else return false;

}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    bool ans=isSorted(a,n);
    if(ans) cout<<"Sorted\n";
    else cout<<"Not Sorted";
    
    bool ans2=isSorted2(a,n);
    if(ans2) cout<<"Sorted\n";
    else cout<<"Not Sorted";

    bool ans3=isSorted3(a,n,0);
    if(ans3) cout<<"Sorted\n";
    else cout<<"Not Sorted\n";

    return 0;
}