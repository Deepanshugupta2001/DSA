#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin>>r[i];
        }
        int m;
        cin>>m;
        int a=INT_MAX,ctr=0;
        int finali=-1;
        int finalj=-1;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if(r[j]>r[j+1]) swap(r[j],r[j+1]);
            }
            
        }
        
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++) {
                if(r[i]+r[j]==m )
                {
                    if(a> abs(r[i]-r[j])){
                        finali=i;
                        finalj=j;
                        a=abs(r[i]-r[j]);
                    }   
                }
            }
        }
        cout<<"Deepak should buy roses where price are "<<r[finali]<<" and "<<r[finalj]<<"."<<endl;
        cout<<endl;       
    }
    return 0;
}