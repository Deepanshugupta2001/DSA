// #include<iostream>
// #include<climits>
// using namespace std;
// void maxheight(int n,int *a,int min,int x,int target,int max){
//     //base case
//     if(min==max){
//         return;
//     }
//     //recursive case
//     for (int j = 0; j < n; j++)
//     {
//         if(a[j]>min){
//             target=a[j]-min+target;
//         }    
//     }

//     if(x==target){
//         cout<<min<<endl;
//     }
//     else maxheight(n,a,min+1,x,target,max);
// }

// int main(){
//     int n,min=INT_MAX,max=INT_MIN;
//     cin>>n;
//     int a[1000];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         if(min>a[i]) min=a[i];
//         if(max<a[i]) max=a[i];
//     }
//     // cout<<min<<endl;
//     // cout<<max<<endl;
//     int x;
//     cin>>x;
//     maxheight(n,a,min,x,0,max);
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
int tar(int n,int *a,int x,int target,int mid){

    for (int i = 0; i < n; i++)
    {   
        if(a[mid]>a[i]) target+=(a[mid]-a[i]);
    }
    return target;
}
void maxheight(int n,int *a,int x,int target,int max,int s,int e){
    
    if(target>max) return;
    while(s<=e){

    int mid=(s+e)/2;
    
    target=tar(n,a,x,target,mid);
    if(x==target){
        do{
        mid=mid+1;
        tar(n,a,x,target,mid);
        }while(x==target);
        cout<<target;
        break;
    }
    else if(x>target){
        maxheight(n,a,x,target,max,mid+1,n-1);
    }    
    else if(x<target){
        maxheight(n,a,x,target,max,0,mid-1);
    }
    }

}


int main(){
    int n,max=INT_MIN;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(max<a[i]) max=a[i];
    }
    // cout<<min<<endl;
    // cout<<max<<endl;
    int x;
    cin>>x;
    int s=0,e=n-1;
    maxheight(n,a,x,0,max,s,e);
    return 0;
}