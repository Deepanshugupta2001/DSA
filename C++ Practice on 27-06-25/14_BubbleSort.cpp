#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-1; j++)
        {
            if(a[j]>a[j+1]){
                // Method 1:-
                // int temp=a[j];
                // a[j]=a[j+1];
                // a[j+1]=temp;

                //Method 2:-
                // a[j]=a[j]+a[j+1];
                // a[j+1]=a[j]-a[j+1];
                // a[j]=a[j]-a[j+1];

                // Method 3:-
                // a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
                
                // Method 4:-
                swap(a[j],a[j+1]);
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