#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float ans,inc;
    int precision = 2;
    int cp=1;
    ans=1,inc=1;
    
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

    cout<<"Square Root of "<<n<<" is : "<<ans<<endl;
}