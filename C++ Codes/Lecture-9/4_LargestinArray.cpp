#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cout<<"Enter the no.s that you want to read: ";
    cin>>n;
    int lar=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }

    cout<<"The largest number in the array is: "<<lar<<endl;
    return 0;
}