#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        //1.Printing Tabs
        for(int j=n;j>1;j--){
            cout<<'\t';
        }
        cout<<endl;
        //2.Printing numbers increasing
        for(int k=1;k<=n;k++){
            cout<<k<<'\t';
        }
    }
    
    /*for(int i=1;i<=n;i++){
        int m=1;
        for(int j=n;j>=i+1;j--)
        {
            cout<<'\t';
        }
        for(int k=1;k<=n;k++)
        {
            cout<<m;
            cout<<'\t';
            m++;
        }
        --m;
        for(int p=2;p<=n-1;p++)
        {
            cout<<m;
            cout<<'\t';
            m--;
        }
        cout<<endl;
    }*/
    return 0;
}