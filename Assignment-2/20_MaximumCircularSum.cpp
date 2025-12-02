// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         int sum=0,sum1=0,sum2=0;

//         for (int i = 0; i < n-1; i++)
//         {
//             sum1+=a[(i+1)%n];
//         }
        
        
//     }
// }

#include<iostream>
#include<climits>
using namespace std;
void sum(int n,int *arr,int i,int sum1,int sum2){
    //base case
    // int sum1=0,sum2=0;
    sum1=0;
    if(i==n) cout<<sum2<<endl;
    for (int j = 0; j < n; j++)
    {
        sum1+=arr[j];
    }
    sum1=sum1-arr[i];
    sum2=max(sum1,sum2);
    sum(n,arr,i+1,sum1,sum2);
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        // for (int i = 0; i < n; i++)
        // {
            
        // }
        int sum1=0,sum2=INT_MIN;
        sum(n,arr,0,sum1,sum2);
        
    }
}