#include<iostream>
using namespace std;
int main()
{
     int n;
    float inc,ans;
    cin>>n;
    int precision=2;
    inc=1;
    ans=0;

    int cp=1;
    while(cp<=precision+1)
    {
        while(ans*ans<=n)
        {
            ans=ans+inc;

        }
        ans=ans-inc;
        inc=inc/10;
        cp=cp+1;
    }

    cout<<"Square Root : "<<ans<<endl;
    return 0;

}