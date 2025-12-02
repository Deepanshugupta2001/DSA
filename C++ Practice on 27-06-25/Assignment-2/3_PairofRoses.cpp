#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int price[n];
        for (int i = 0; i < n; i++)
        {
            cin>>price[i];
        }
        int money;
        cin>>money;
        int a,b;

        for (int i = 0; i < n-1; i++)
        {
            int min=INT_MAX;
            for (int j = i+1; j < n; j++)
            {
                if(price[i]+price[j]==money and abs(price[j]-price[i])<min){
                    if(price[i]<price[j]){
                        a=price[i];
                        b=price[j];
                    }
                    else{
                        a=price[j];
                        b=price[i];
                    }
                }
            }
            
        }
        cout<<"Deepak should buy roses whose prices are "<<a<<" and "<<b<<"."<<endl;
        
    }
}