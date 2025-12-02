#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int i=1;
        while(i<=n-row){
            cout<<" ";
            i++;
        }
        int j=1;
        while(j<=(2*row-1)){
            cout<<j;
            j++;
        }
        cout<<endl;
        row++;
    }
}