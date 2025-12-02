#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution{
    public:
        int longestConsecutive(vector<int> &nums){
            map<int,bool> m;
            for(int x: nums){
                if(m.find(x-1)==m.end()){
                    m[x]=true;
                }
                else{
                    m[x]=false;
                }
                if(m.find(x+1)==m.end()){
                    m[x+1]=false;
                }
            }
            int ctr=0;
            for(pair<int,bool> p :m){
                int key=p.first;
                bool canStart=p.second;
                if(canStart){
                    int cnt=0;
                    while(m.find(key)!=m.end()){
                        cnt++;
                        key++;
                    }
                    ctr=max(ctr,cnt);
                }
            }
            return ctr;
        }
};
int main(){
    Solution s;
    vector<int> nums={0,1,4,5,6,11,12,13,14};
    cout<<s.longestConsecutive(nums)<<endl;
    return 0;
}