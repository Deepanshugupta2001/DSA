#include<iostream>
using namespace std;
int main(){
    int a[10][10];
    int n;
    cin>>n;
    if(n>=4 and n<=10){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
            
        }
        bool kyaLowerTraingularMatrixHai=false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                if(j>i){
                    a[i][j]=0;
                    kyaLowerTraingularMatrixHai=true;
                }
            }
            
        }

        if(kyaLowerTraingularMatrixHai) cout<<"true"<<endl;
        else cout<<false;
        
    }

    return 0;
}