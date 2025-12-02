// #include<iostream>
// #include<queue>
// using namespace std;
// int n;
// class node{
//     public:
//         int data;
//         node* left;
//         node* right;
//         node(int d){
//             data=d;
//             left=right=NULL;
//         }
// };

// node* insertInBST(node*root, int data){
//     if(!root){
//         root=new node(data);
//         return root;
//     }
//     if(root->data>data){
//         root->left=insertInBST(root->left,data);
//         return root;
//     }
//     else{
//         root->right=insertInBST(root->right,data);
//         return root;
//     }
// }

// node* createTree(){
//     node*root= NULL;

//     int data;
//     // cin>>data;
//     while(n--){
//         cin>>data;

//         root=insertInBST(root,data);
//     }
//     return root;
// }

// void preorder(node* root){
//     if(!root) return;

//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// node* searchBST(node* root,int key){
//     if(!root) return NULL;

//     if(root->data== key) return root;
//     else if(root->data > key) return searchBST(root->left,key);
//     return searchBST(root->right,key);
// }

// void inorder(node* root){
//     if(!root) return ;

//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void postorder(node* root){
//     if(root == NULL) return ;

//     postorder(root->left);
//     postorder(root->right);

//     cout<<root->data<<" ";
// }
// int pos;
// int ctr=0;
// void findnodes(node* x){
//     if(!x) return;
//     if (ctr==pos) {
//         cout<<x->data<<endl;
//         return ;
//     }
//     if(x->left) 
//     {
//         findnodes(x->left);
//         ctr++;
//     }
//     else if(x->right){
//         findnodes(x->right);
//         ctr++;
//     }
//     ctr--;

// }
// void levelOrderTraversal(node* root){
//     if(!root) return ;

//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//             node* f=q.front();
//             q.pop();
//             if(f){
//                 cout<<f->data<<" ";
//                 if(f->left) q.push(f->left);
//                 if(f->right) q.push(f->right);
//             }
//             else{
//                 cout<<endl;
//                 if(!q.empty()) q.push(NULL);
//             }
//         }
//     }

// int main(){
//     cin>>n;

//     node* root=createTree();
//     int key;
//     cin>>key;
//     cin>>pos;
//     node*x=searchBST(root,key);
//     findnodes(x);
//     // preorder(root);
//     // cout<<endl;
//     // inorder(root);
//     // cout<<endl;
//     // postorder(root);
//     // cout<<endl;
//     // levelOrderTraversal(root);

//     return 0;
// }

#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
};
int n;
TreeNode* insertInBST(TreeNode* root, int data){
    if(!root){
        root=new TreeNode(data);
        return root;
    }
    if(root->data>data){
        root->left=insertInBST(root->left,data);
        return root;
    }
    else{
        root->right=insertInBST(root->right,data);
        return root;
    }
}
TreeNode* createTree(){
    TreeNode*root= NULL;

    int data;
    // cin>>data;
    while(n--){
        cin>>data;

        root=insertInBST(root,data);
    }
    return root;
}

TreeNode* searchBST(TreeNode* root,int key)
    {
        if(!root) return NULL;
    
        if(root->data== key) return root;
        else if(root->data > key) return searchBST(root->left,key);
        return searchBST(root->right,key);
    }

unordered_map<TreeNode*, TreeNode*> childParent; // key: node, value: parent
void preorder(TreeNode* curr, TreeNode* par) {
        // base case
        if (curr == NULL)
            return;

        // recursive case
        childParent[curr] = par;
        preorder(curr->left, curr);
        preorder(curr->right, curr);
    }
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        preorder(root, NULL);

        // starting bfs from target
        queue<TreeNode*> qu;
        qu.push(target);
        unordered_set<TreeNode*> visited;

        while (!qu.empty() && k) {
            k--;
            int size = qu.size();
            for (int i = 0; i < size; i++) {
                TreeNode* front = qu.front();
                qu.pop();
                visited.insert(front);

                if (!visited.count(front->left) && front->left)
                    qu.push(front->left);
                if (!visited.count(front->right) && front->right)
                    qu.push(front->right);
                if (!visited.count(childParent[front]) && childParent[front])
                    qu.push(childParent[front]);
            }
        }

        vector<int> ans;
        while (!qu.empty()) {
            TreeNode* front = qu.front();
            qu.pop();
            ans.push_back(front->data);
        }

        return ans;
}

int main(){
    cin>>n;
	TreeNode* root=createTree();
    vector<int> v;
    int key;
    cin>>key;
    TreeNode* target=searchBST(root,key);
    int k;
    cin>>k;
    v=distanceK(root,target,k);
	if(v.size()){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}	