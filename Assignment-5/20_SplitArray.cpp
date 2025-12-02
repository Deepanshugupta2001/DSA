#include<iostream>
#include<vector>
using namespace std;
void splitArray(int *a,int sum1,int sum2,int i,int n,vector<int> &v,vector<int> &x,int &ctr){

    //base case
    if(i==n){
        if(sum1==sum2){
            for (int j = 0; j < v.size(); j++)
            {
                cout<<v[j]<<" ";
            }

            cout<<"and ";

            for (int k = 0; k < x.size(); k++)
            {
                cout<<x[k]<<" ";
            }
            cout<<endl;
            ctr++;
        }
        return;

    }

    //recursive case
    v.push_back(a[i]);
    sum1=sum1+a[i];
    splitArray(a,sum1,sum2,i+1,n,v,x,ctr);
    sum1=sum1-a[i];
    v.pop_back();

    sum2=sum2+a[i];
    x.push_back(a[i]);
    splitArray(a,sum1,sum2,i+1,n,v,x,ctr);
    sum2=sum2-a[i];
    x.pop_back();

}
int main(){
    int n;
    cin>>n;
    int a[100];
    vector<int> x;
    vector<int> v;
    int ctr=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    splitArray(a,0,0,0,n,v,x,ctr);
    cout<<ctr<<endl;
    return 0;
    
}