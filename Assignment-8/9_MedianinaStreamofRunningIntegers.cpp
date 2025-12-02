// #include<iostream>
// #include<functional>
// #include<queue>
// // #include<vector>
// using namespace std;
// vector<int> v;
// void printmedian(priority_queue<int,vector<int>,greater<int>> h){
//     vector<int> a;
//     while(!h.empty()){
//         a.push_back(h.top());
//         h.pop();
//     }
//     // for (int i = 0; i < a.size(); i++)
    
//         if(a.size()==1) v.push_back(a[0]);
//         else {
//             if(a.size()%2!=0){
//                 int med=a[a.size()/2];
//                 v.push_back(med);
//             }
//             else{
//                 int m1=a[a.size()/2];
//                 int m2=a[a.size()/2 -1];
//                 int med=(m1+m2)/2;
//                 v.push_back(med);
//             }
//         }
    
    
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         priority_queue<int,vector<int>,greater<int>> h;
//         for (int i = 0; i < n; i++)
//         {
//             int d;
//             cin>>d;
//             h.push(d);
//             printmedian(h);
//         }
//         for (int i = 0; i < v.size(); i++)
//         {
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }

//Another Method:-
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printmedian(vector<int> a){
    sort(a.begin(),a.end());
    if(a.size()==1){
        cout<<a[0]<<" ";
    //  v.push_back(a[0]);
    }
    else {
        if(a.size()%2!=0){
            int med=a[a.size()/2];
            cout<<med<<" ";
            // v.push_back(med);

        }
        else{
            int m1=a[a.size()/2];
            int m2=a[a.size()/2 -1];
            int med=(m1+m2)/2;
            cout<<med<<" ";
            // v.push_back(med);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int d;
            cin>>d;
            a.push_back(d);
            printmedian(a);
        }
        
    }
}