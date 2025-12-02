#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n;
    cout<<"Enter the no.s that you want to read: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cout<<"Enter the number you want to search: ";
    cin>>num;
    bool ctr;
    for(int i=0;i<n;i++){
        ctr=false;
        if(num==a[i]){
            cout<<"Found the number at "<<i<<" index/position in the array"<<endl;
            ctr=true;
            break;
            //return 0;        break can also be used in place of return 0 to get out of the loop
        }    
        
    }
    if(ctr==false)
    {
        cout<<"Not Found "<<endl;
    }
    

    return 0;

}