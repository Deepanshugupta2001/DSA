#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    
    bool milgaya=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>i and a[i][j]!=0) {
                milgaya=true;
                break;
            }
        }
        if(milgaya) break;
    }

    if(milgaya) cout<<"false"<<endl;
    else cout<<"true"<<endl;
    return 0;
}
