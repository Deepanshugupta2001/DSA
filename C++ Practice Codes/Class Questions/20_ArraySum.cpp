#include<iostream>
using namespace std;
int arraysum(int a[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        
        sum+=a[i];
    }
    return sum;
    
}
int main(){
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //arraysum(a,n);
    cout<<"Sum of the elements of the array is: "<<arraysum(a,n)<<endl;

}