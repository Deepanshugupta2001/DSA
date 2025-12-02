#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};

node* buildTree(){
    // base case
    int d;
    cin>>d;
    if(d == -1) return NULL;

    //recursive case
    node* root= new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

// int heightTree(node* root){
//     //base case
//     if(!root) return 0;

//     //recursive case
//     return max((heightTree(root->left)),(heightTree(root->right)))+1;

// }

// int diameter(node* root){
//     if(!root) return 0;
//     int op1= heightTree(root->left) + heightTree(root->right);
//     int op2=diameter(root->left );
//     int op3=diameter(root->right);
//     return max(op1,max(op2,op3));
// }

void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void mirrorTree(node* root){
    //base case
    if(!root) return ;

    //recursive case
    swap(root->left,root->right);
    mirrorTree(root->left);
    mirrorTree(root->right);
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root=buildTree();
    preorder(root);
    cout<<endl;
    // cout<<"Diameter of Tree: "<<diameter(root)<<endl;
    mirrorTree(root);
    preorder(root);
    cout<<endl;

    return 0;
} 