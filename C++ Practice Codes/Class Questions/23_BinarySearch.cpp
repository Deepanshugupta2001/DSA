#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1;
}

int main(){
    int a[]={4,7,8,45,51};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<binarysearch(a,n,key);

    return 0;

}