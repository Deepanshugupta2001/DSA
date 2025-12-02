#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> h(n),t(m);
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>t[i];
    }
    int j=0;
    
    sort(h.begin(),h.end());

    
    while(j<m){
        int i=0;
        bool milgaya=false;
        if(h[i]==t[j]){
            cout<<h[i]<<endl;
            milgaya=true;
            h[i]=0;

        }
        else if(h[i]<t[j] and h[i+1]>t[j] and h[i]!=0){
            cout<<h[i]<<endl;
            milgaya=true;
            h[i]=0;
        }
        else if(h[i]<t[j] and h[i+1]<t[j] and h[i]!=0){
            i++;
        }
        if(milgaya) j++;
        else if(i==n and milgaya==false){
            cout<<"-1"<<endl;
        }
    }
    
    // while(j<m){
    //     bool milgaya=false;

    //     for (int i = 0; i < n; i++)
    //     {
    //         if(h[i]==t[j]){
    //             cout<<h[i]<<endl;
    //             milgaya=true;
    //             h[i]=0;
    //             break;
    //         }
    //     }
    //     // bool milgaya=false;
    //     // for(int i=0;i<n;i++){
    //     //     if(t[j]==h[i]){
    //     //         cout<<h[i]<<endl;
    //     //         h[i]=0;
    //     //         milgaya=true;
    //     //         break;
    //     //     }

    //     // }
    //     // if(milgaya==false){
    //     //     for (int i = 0; i < n; i++)
    //     //     {
    //     //         if(t[j]-1)
    //     //     }
            
    //     // }
    //     // j++;
    //     sort(h.begin(),h.end());
    //     if(milgaya==false){
    //     int s=0,e=n-1;
    //     while(s<=e){
    //         int mid=(s+e)/2;
    //         // cout<<"Printing mid: "<<h[mid]<<endl;

    //         if(h[mid]==t[j]-1){
    //             cout<<h[mid]<<endl;
    //             h[mid]=0;
    //             milgaya=true;
    //             break;
    //         }
    //         else if(h[mid]>t[j]){
    //             e=mid-1;

    //         }
    //         else{
    //             s=mid+1;

    //         }
    //         if(s==e and h[s]<t[j] and h[s]!=0){
    //             cout<<h[s]<<endl;
    //             h[s]=0;
    //             milgaya=true;
    //             break;
    //         }
    //     }
    // }
    // //     s=0,e=n-1;
    // //     if(milgaya==false){
    // //     while(s<=e){
    // //         int mid=(s+e)/2;
    // //         // cout<<h[mid]<<endl;

    // //         if(h[mid]==t[j]-1){
    // //             cout<<h[mid]<<endl;
    // //             h[mid]=0;
    // //             milgaya=true;
    // //             break;
    // //         }
    // //         else if(h[mid]>t[j]){
    // //             e=mid-1;

    // //         }
    // //         else{
    // //             s=mid+1;

    // //         }
    // //     }
    // // }
    //     if(milgaya==false){
    //         cout<<"-1"<<endl;
    //     }
    //     j++;
    // }
    return 0;
}