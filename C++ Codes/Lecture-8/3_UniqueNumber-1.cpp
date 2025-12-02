#include<iostream>
using namespace std;
int main()
{
    // N numbers are given ,N is always ODD
    //1,2,3,5,3,2,1,5,6
    // FIND THE UNIQUE NUMBER ,THAT OCCURS ONLY ONCE

    int ans=0;
    int n,i,num;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>num;
        ans^=num;
    }

    cout<<"Unique Number : "<<ans<<endl;
    return 0;
}