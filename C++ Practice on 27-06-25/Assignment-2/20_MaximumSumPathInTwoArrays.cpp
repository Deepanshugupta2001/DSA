#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin>>b[j];
        }
        int sum=0,sum1=0,sum2=0;
        for (int i = 0,j=0; i < n || j<m; i++,j++)
        {
            if(a[i]==b[j]){
                sum+=a[i]+max(sum1,sum2);
                sum1=0;
                sum2=0;
            }
            else{
                sum1+=a[i];
                sum2+=b[j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}