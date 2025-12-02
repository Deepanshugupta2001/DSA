#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[100],n;
    cout<<"Enter n(max 100) : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int lar=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>lar){
            lar=a[i];
        }
    }
    cout<<"The largest element in the array is : "<<lar<<endl;
}