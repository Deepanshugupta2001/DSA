#include<iostream>
using namespace std;
int main()
{
    /*int a[10];
    int n,sum_odd=0,sum_even=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_odd+=a[i];
        }
        else{
            sum_even+=a[i];
        }
    }

    cout<<sum_even<<endl;
    cout<<sum_odd<<endl;*/
    /*int n;
    int a,b,c,d;
    int sum_odd=0,sum_even=0;
    cin>>n;
    a=n%10;
    sum_even+=a;
    n=n/10;
    //cout<<n<<endl;
    b=n%10;
    sum_odd+=b;
    n/=10;
    c=n%10;
    sum_even+=c;
    n/=10;
    d=n;
    sum_odd+=d;
    cout<<sum_even<<endl;
    cout<<sum_odd<<endl;*/

    int a[10000],n,sum_odd=0,sum_even=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
        if(i==0){
            sum_even+=a[i];
        }
        else if(i%2==0){
            sum_even+=a[i];
        }
        else{
            sum_odd+=a[i];
        }
    }
    cout<<sum_odd<<endl;
    cout<<sum_even<<endl;

    return 0;
    
}