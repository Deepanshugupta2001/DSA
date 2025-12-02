#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    int a=0,b=1,c;
    c=a+b;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if(k==1) {
                cout<<a;
                k++;
            }

            else if(k==2 ) {
                a=b;
                b=c;
                cout<<a<<'\t'<<b;
                k++;
            }
            else if(k>2 and i>2){
            c=a+b;
            cout<<c<<'\t';
            a=b;
            b=c;
            }

        }
        cout<<endl;
        
    }
    
    return  0;
}