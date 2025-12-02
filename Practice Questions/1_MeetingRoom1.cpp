// // Iss code ma TLE aa raha hi kyuki issma bubble Sort use ki hai jiski time COmplexity hoti hai :O(N2) but iss question conditions ka according yeh
// // O(N log N) ma chalana hai
// // #include<iostream>
// // #include<vector>
// // #include<algorithm>
// // #include<climits>
// // using namespace std;
// // int main(){
// //     vector<vector<int>> v;
// //     int n,m;
// //     cin>>n>>m;
// //     for (int i = 0; i < n; i++)
// //     {
// //         vector<int> k;
// //         for(int j=0;j<m;j++){
// //             int input;
// //             cin>>input;
// //             k.push_back(input);
// //         }
// //         v.push_back(k);
// //     }
// //     cout<<endl;
// //     cout<<"Printing Vector for the First Time:-"<<endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             cout<<v[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     cout<<endl;
// //     int l=0;
// //     cout<<"Swapping Starts:-"<<endl;
// //     // for(int k=0;k<n;k++){
// //         // int min=INT_MAX;

// //         for (int i = 0; i < n; i++)
// //         {
// //                 // if(v[i][j]<v[i+1][j]){
// //                 //     swap(v[i],v[i+1]);
// //                 // }
// //                 // if(v[i][0]<min){
// //                 //     min=i;
// //                 // }
// //             for (int o = 0; o < n-i-1; o++)
// //             {
// //                 if(v[o]>v[o+1]){
// //                     // for (int j = 0; j < m; j++)
// //                     // {
// //                         swap(v[o][0],v[o+1][0]);
// //                         swap(v[o][1],v[o+1][1]);
// //                     // }
// //                 }
// //             }
            
        
        
// //     // }// l++;
        
// //     }
// //     cout<<"Matrix After Swapping:-"<<endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < m; j++)
// //         {
// //             cout<<v[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     cout<<endl;
// //     bool kyameeting=true;
// //     for (int i = 0; i < n-1; i++)
// //     {
// //         if(v[i][1]>v[i+1][0]) kyameeting=false;
// //     }
// //     cout<<kyameeting<<endl;
// //     // vector<vector<int>> v1(m,vector<int> (n));
// //     // for(int i=0;i<n;i++){
// //     //     for(int j=0;j<m;j++){
// //     //         v1[j][i]=v[i][j];
// //     //     }
// //     // }
        
// //     // for(auto &i: v1){
// //     //     sort(v1.begin(),v1.end());
// //     // }

// //     // for (int i = 0; i < m; i++)
// //     // {
// //     //     sort(v1.begin(),v1.end());
// //     // }
    
        
// //     // for(int i=0;i<n;i++){
// //     //     for(int j=0;j<m;j++){
// //     //         v[i][j]=v1[j][i];
// //     //     }
// //     // }
        
// //     // for(int i=0;i<n;i++){
// //     //     for(int j=0;j<m;j++){
// //     //         cout<<v[i][j]<<" ";
// //     //     }
// //     //     cout<<endl;
// //     // }
// //     // cout<<endl;

// //     return 0;
// // }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> v;
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> k;
//         for(int j=0;j<m;j++){
//             int input;
//             cin>>input;
//             k.push_back(input);
//         }
//         v.push_back(k);
//     }
//     int col1[n],col2[n];
//     for (int i = 0; i < n; i++)
//     {
//         col1[i]=v[i][0];
//         col2[i]=v[i][1];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<col1[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"nEw:-"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<col2[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &a,vector<int> &b,vector<int> &c,int s,int e){
//     int mid=(s+e)/2;
//     int i=0,j=mid+1;
//     int k=0;
//     while(i<=mid and j<=e){
//         if(b[i]<c[j]) {
//             a[k]=b[i];
//             k++;
//             i++;
//         }
//         else{
//             a[k]=c[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<=mid) a[k++]=b[i++];

//     while(j<=e) a[k++]=c[j++];
// }
// void mergesort(vector<int> &a,int s,int e){
//     if(s>=e) return;

//     int mid=(s+e)/2;
//     vector<int> b,c;
//     for (int i = s; i < mid+1; i++)
//     {
//         b[i]=a[i];
//     }
//     for (int i = mid+1; i <= e; i++)
//     {
//         c[i]=a[i];
//     }
    
//     //2.Sort
//     mergesort(b,s,mid);
//     mergesort(c,mid+1,e);

//     //3.Conquer

//     merge(a,b,c,s,e);
    
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> a;
//     for (int i = 0; i < n; i++)
//     {
        
//     }
//     mergesort(a,0,n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// #include<algorithm>
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int *a,int *b,int *c,int s,int e){
//     int mid=(s+e)/2;
//     int i=0,j=mid+1;
//     int k=0;
//     while(i<=mid and j<=e){
//         if(b[i]<c[j]) {
//             a[k]=b[i];
//             k++;
//             i++;
//         }
//         else{
//             a[k]=c[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<=mid) a[k++]=b[i++];

//     while(j<=e) a[k++]=c[j++];
// }
// void mergesort(int *a,int s,int e){
//     if(s>=e) return;

//     int mid=(s+e)/2;
//     int b[1000],c[1000];
//     for (int i = s; i < mid+1; i++)
//     {
//         b[i]=a[i];
//     }
//     for (int i = mid+1; i <= e; i++)
//     {
//         c[i]=a[i];
//     }
    
//     //2.Sort
//     mergesort(b,s,mid);
//     mergesort(c,mid+1,e);

//     //3.Conquer

//     merge(a,b,c,s,e);
    
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> v;
//     for (int i = 0; i < n; i++)
//     {
//         vector<int> k;
//         for (int j = 0; j < m; j++)
//         {
//             int digit;
//             cin>>digit;
//             k.push_back(digit);

//         }
//         v.push_back(k);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sort(v[i].begin(),v[i].end());
//     }
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < m; j++)
//         {
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Done Printing"<<endl;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         a[i]=v[i][0];
//     }
//     mergesort(a,0,n-1);
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         b[i]=v[i][1];
//     }
//     mergesort(b,0,n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Now Printing B:-"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<b[i]<<" ";
//     }
//     cout<<endl;
//     bool kyameetingpossible=true;
//     for (int i = 0; i < n-1; i++)
//     {
//         if(b[i]>a[i+1]) {
//             kyameetingpossible=false;
//             break;
//         }
//     }
//     cout<<kyameetingpossible<<endl;
//     // cout<<endl;
//     return 0;
// }
// // Optimised Approach:-
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        vector<pair<int,int>> ans;
        for(auto i: arr){
            pair<int,int> p;
            p.first=i[0];
            p.second=i[1];
            ans.push_back(p);
        }
        
        sort(ans.begin(),ans.end());
        bool kyameetinghui=true;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i].second>ans[i+1].first) {
                kyameetinghui=false;
                break;
            }
        }
        
        return kyameetinghui;
        // int n=arr.size();
        // for(auto i:&ans){
        //     arr[i]=i;
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<2;j++){
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
};