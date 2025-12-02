#include<iostream>
#include<vector>
#include<map>
using namespace std;
class TreeNode{
    public:
        int val;
        
};
void dfs(TreeNode *root,map<int,vector<int>> distMap,int dist){
    //base case
    if(root==NULL){
        return;
    }
    //recursive case
    distMap[dist].push_back(root->val);
    dfs(root->left,distMap,dist-1);
    dfs(root->right,distMap,dist+1);
}
int main(){
    TreeNode* root=NULL;
    root=buildTree();
    
    map<int,vector<int>> distMap;

    dfs(root,distMap,0);

    for(pair<int,vector<int>> p:distMap){
        int dist=p.first;
        vector<int> nodevals=p.second;
        cout<<dist<<" : ";
    }
}