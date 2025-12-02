#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string cb[10]={"2","3","5","7","11","13","17","19","23","29"};
    int n=sizeof(cb)/sizeof(cb[0]);
    // int n=10;
    cout<<n;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<cb[i]<<" ";
    // }
    
    string a,y;
    cin>>a;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int ctr=0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            for (int k = 0; k < 10; k++)
            {
                            
            y=a.substr(i,j);
            // for (int i = 2; i < 30; i++)
            // {

                if(((stoi)(y)%(stoi)(cb[k]))!=0 and y!="0" and y!="1" and (stoi)(y)>=(stoi)(cb[k])) {
                    ctr++;
                    // cout<<y<<endl<<cb[k]<<endl;
                    // cout<<endl;
                }
                
            // }
            
            
        }
        
    }

    cout<<ctr<<endl;

    return 0;
    
    }   

}
