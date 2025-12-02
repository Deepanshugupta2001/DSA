#include<iostream>
#include<queue>
#include<functional>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> h;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin>>b[j];
    }
    int freq1[100000],freq2[100000];
    for (int i = 0; i < n; i++)
    {
        freq1[a[i]-0]++;
        freq2[b[i]-0]++;
    }
    for (int i = 0; i < 100000; i++)
    {
        if(freq1[i]>0 and freq2[i]>0){
            if(freq1[i]<freq2[i]){
                for (int j = 0; j < freq1[i]; j++)
                {
                    h.push(i);
                }
                
            }
            else {
                for (int k = 0; k < freq2[i]; k++)
                {
                    h.push(i);
                }
                
            }
        }
    }
	cout<<"[";
    while(!h.empty()){
		if(h.size()>1) cout<<h.top()<<", ";
		else cout<<h.top();
        h.pop();
    }
	cout<<"]";
    cout<<endl;
    return 0;
}