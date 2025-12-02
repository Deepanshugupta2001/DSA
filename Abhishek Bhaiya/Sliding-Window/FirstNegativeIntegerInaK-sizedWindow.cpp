#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={-2,0,-1,2,-3,1,3};
    int n=sizeof(arr)/sizeof(int);
    int k=4;

    int i=0; //to store the start of the window
    int j=0; //to store the end of the window

    queue<int> q; //to Store the negative numbers in a window
    vector<int> ans; //to store first negative number for each k-sized window

    //find the first negative number in the 1st window

    while(j<k){
        if(arr[j]<0) q.push(arr[j]);
        j++;
    }
    if(q.empty()){
            //current window has no negative elements
            ans.push_back(0);
        }
        else{
            ans.push_back(q.front());
        }
    while(j<n){
        

        if(arr[i]<0) q.pop();
        i++;
        if(arr[j]<0) q.push(arr[j]);
        j++;

        if(q.empty()){
            //current window has no negative elements
            ans.push_back(0);
        }
        else{
            ans.push_back(q.front());
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}