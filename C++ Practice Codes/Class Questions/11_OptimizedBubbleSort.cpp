#include<iostream>
using namespace std;
int main(){
    int a[]={8,4,5,7,6};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        int swappingcount=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swappingcount++;
            }
            if(swappingcount==0){
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}