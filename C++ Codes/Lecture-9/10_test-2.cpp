#include<iostream>
using namespace std;
int main()
{
    //Bubble Sort Faster Method
    /*int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/

    int a[]={5,1,3,4,2};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}