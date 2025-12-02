// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         data = d;
//         left = NULL;
//         right = NULL;
//     }
// };
// int j;
// node *build(string s)
// {
//     if (s == "true")
//     {
//         int d;
//         cin >> d;
//         node *root = new node(d);
//         string l;
//         cin >> l;
//         if (l == "true")
//         {
//             root->left = build(l);
//         }
//         string r;
//         cin >> r;
//         if (r == "true")
//         {
//             root->right = build(r);
//         }
//         j=root->data;

//         return root;
//     }
//     return NULL;
// }
// void preorder(node* root){
//     if(!root) return;

//     cout<<root->data<<" ";
//     preorder(root->left);
//     // preorder(root->right);
// }
// // void preorder(node* root){
// //     if(!root) return;

// //     // cout
// // }
// // void inorder(node* root){
// //     if(!root) {
// //         // cout<<"END";
// //         return ;
// //     }
// //     inorder(root->left);
// //     cout<<root->data<<"=>";
// //     // inorder(root->right);
// // }
// // void printright(node* root){
// //     if(!root) {
// //         // cout<<"END";
// //         return;
// //     }

// //     cout<<root->data<<"<=";
// //     printright(root->right);
// // }
// // node* removeleaves(node* root){
// //     if(!root) {
// //         return NULL;
// //         preorder(root);
// //         printright(root);
// //         cout<<endl;
// //     }
    
// //     removeleaves(root->left);
// //     removeleaves(root->right);
// //     return root;
// // }

// // void siblings(node* root,int k){
// //     if(!root) return ;
// //     if((root->left and !root->right) || (!root->left and root->right)||(root->data!=k)||(!root->left and ! root->right)){
// //         cout<<root->data<<" ";

// //     }
// //     siblings(root->left,k);
// //     siblings(root->right,k);
// // }
// int i=0,ctr=0;
// void levelOrderTraversal(node* root) {
//     // vector<vector<int>> v;
//     // vector<int> d;

//     if(!root) return ;
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//             node* f=q.front();
//             q.pop();
            
//             if(f){

//                 // cout<<f->data<<" ";
//                 // d.push_back(f->data);
//                 i++;
//                 // daalnahaikya=true;
//                 // i++;
//                 if(f->left) q.push(f->left);
//                 if(f->right) q.push(f->right);
//             }
//             else{
//                 // cout<<endl;
//                 // v.push_back(d);
//                 // if(i>1){
// 				// 	int k;
//                 //     for( k=0;k<i-1;k++){
//                 //         cout<<d[k]<<", ";
						
//                 //     }
// 				// 	cout<<d[k];
//                 //     for (int j = i; j >0; j--)
//                 //     {
//                 //        d.pop_back();
//                 //     }
//                 // }
//                 // else{
// 				// 	for(int j=0;j<i;j++){
// 				// 		cout<<d[j];
// 				// 	}
// 				// 	d.pop_back();
//                 // }
//                 if(i==1 and f->data!=j){
//                     cout<<f->data<<" ";
//                 }
//                 i=0;
//                 if(!q.empty()){
//                     q.push(NULL);
//                 }
//             }
//         }
// }
// int main()
// {
//     node *root = build("true");
//     // node* ans=removeleaves(root);
//     // inorder(root);
//     // printright(root);
//     // preorder(root);
//     // int k;
//     // root->data=k;
//     // siblings(root,k);
//     levelOrderTraversal(root);
//     cout<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};
int j;
TreeNode *buildTree(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        TreeNode *root = new TreeNode(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = buildTree(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = buildTree(r);
        }
        j=root->val;

        return root;
    }
    return NULL;
}

void helper(TreeNode* root, vector<int>& ans) {
    if (!root) return;

    if (root->left && !root->right) ans.push_back(root->left->val);
    if (!root->left && root->right) ans.push_back(root->right->val);

    helper(root->left, ans);
    helper(root->right, ans);
}

int main() {
	TreeNode* root = buildTree("true");

	vector<int> ans;
    
    helper(root, ans);

	for(int& i : ans) cout << i << " ";
	cout << endl;
	return 0;
}