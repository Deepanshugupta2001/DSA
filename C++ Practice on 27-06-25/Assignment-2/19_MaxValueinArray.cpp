#include<iostream>
#include<climits>
using namespace std;
int findmax(int n,int *a){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=findmax(n,a);
    cout<<max<<endl;
    return 0;
}