#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    // bool milgaya=false;
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==target){
            // milgaya=true;
            index=i;
            break;
        }
    }
    // if(milgaya) cout<<index<<endl;
    // else cout
    cout<<index<<endl;
    return 0;
}