#include<iostream>
using namespace std;
#define long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c1,c2,c3,c4;
        cin>>c1>>c2>>c3>>c4;
        int n,m;
        cin>>n>>m;
        int r[n],cab[m];
        for (int i = 0; i < n; i++)
        {
            cin>>r[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>cab[i];
        }
        if((c4<c3) and(c4<c2) and (c4<c1)){
            cout<<c4<<endl;
        }
        else{
            int ans1=0,ans2=0;
            for (int i = 0; i < n; i++)
            {
                ans1+=min(c1*r[i],c2);
            }
            ans1=min(ans1,c3);
            for (int i = 0; i < m; i++)
            {
                ans2+=min(c1*cab[i],c2);
            }
            ans2=min(ans2,c3);

            int ans3=0;
            ans3=min(ans1+ans2,c4);
            cout<<ans3<<endl;
        }
    }
    return 0;
}