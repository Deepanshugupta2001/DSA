#include<iostream>
#include<vector>
using namespace std;
int vivek(int n,int *a,int i,int sum,int sum1,vector<int> &v1,vector<int> &v2){
    // base case
    int b[30],c[30];
        int ans=0;

    if(sum1==sum/2){
        // ctr++;
        int k=0;
        for (int m = 0; m <i; m++)
        {
            c[k]=a[m];
            k++;
        }
        k=0;
        
        for (int j = i; j < n; j++)
        {
            // v2.push_back(a[i]);
            b[k]=a[j];
            k++;
        }
        
        // sum=sum/2;
        sum1=0;
        ans=1+max(vivek(n,b,0,sum/2,sum1,v1,v2),vivek(n,c,0,sum/2,sum1,v1,v2));
    }
    // sum1+=a[i];
    // v1.push_back(a[i]);
    vivek(n,a,i+1,sum,sum1+a[i],v1,v2);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,sum=0,sum1=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2!=0){
        cout<<"0"<<endl;
    }
    else{
        vector<int> v1,v2;
        // int ctr=0;
        int ctr=0;
        ctr=vivek(n,a,0,sum,sum1,v1,v2);
        cout<<ctr<<endl;
    }
}
}