#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,no,lar,chota,sum=0;
    cin>>n;
    int i=1;
    lar=INT_MIN,chota=INT_MAX;
    while(i<=n){
        cin>>no;
        if(no>lar){
            lar=no;
        }
        if(no<chota)
        {
            chota=no;
        }

        sum=sum+no;
        i=i+1;
    }

    cout<<"The Largest number is: "<<lar<<endl;
    cout<<"The Smallest Number is: "<<chota<<endl;
    cout<<"The average of N numbers is: "<<sum/(no*1.0)<<endl;

    return 0;
}