#include<iostream>
using namespace std;
// void frequency(int* freq,int n){
//     int ans=0;
//     for (int i = 0; i < 100; i++)
//     {
//         cout<<freq[i]<<endl;
//         if(freq[i]>n/2){
//             int ans=max(ans,i);
//             // ans+=1;
//         }
//     }

//     cout<<ans+1<<endl;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     // int x=0,ctr=0;  
//     /*for (int i = 0; i < n; i++)
//     {
//         x=a[i];
//         for (int j = 0; j < n; j++)
//         {
//             if(a[i]==x) ctr++;
            
//         }
//         if(ctr>=(n/2)) {
//             cout<<x<<endl;
//             break;
//         }
//         else ctr=0;
        
//     }*/
//     int freq[100]={0};
//     for (int i = 0; i < n; i++)
//     {
//         int index=a[i]-1;
//         freq[index]++;
//     }

//     frequency(freq,n);       
//     return 0;   

    
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if(a[j]>a[j+1]) swap(a[j],a[j+1]);
//         }
        
//     }
//     int ctr=1,b;

//     for (int i = 1; i < n; i++)
//     {
//         if(a[i]==a[i-1]) {
//             ctr++;
//             b=a[i];
//         }
//         else if(a[i]!=a[i-1]){
//             if(ctr>n/2){
//             cout<<b;}
//             else if(ctr<n/2){
//                 ctr=1;
//             }
//         }
//         else if(a[i+1]='\0') {
//             if(ctr>n/2){
//                 cout<<b;
//             }
//         }
//     }   
// }
int majority(int i,int *arr,int n){
    int ctr=0;
    int a=arr[i];
    for (int k = 0; k < n; k++)
    {
        if(arr[k]==a) ctr++;
    }

    if(ctr> (n/2)) return a;
    else majority(i+1,arr,n);
    
    // if(i==n and ctr<(n/2)) return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=majority(0,arr,n);
    cout<<ans<<endl;
    return 0;
    
}