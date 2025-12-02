#include<iostream>
#include<climits>
using namespace std;
// #include "treetraversal.h"
class node{
    public:
        int data;
        node* left,*right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};

node* insertinBst(node* root,int d){
    if(!root){
        root=new node(d);
        return root;
    }
    if(root->data>d){
        root->left=insertinBst(root->left,d);
        return root;
    }
    else{
        root->right=insertinBst(root->right,d);
        return root;
    }
}
node* createTree(){
    node* root=NULL;
    int d;
    cin>>d;
    while(d!=-1){
        root=insertinBst(root,d);
        cin>>d;
    }
    return root;
}
class Pair{
    public:
        int height;
        bool isbalanced;
};
Pair isBalancedBST(node* root){
    if(!root) return {0,true};

    Pair left=isBalancedBST(root->left);
    Pair right=isBalancedBST(root->right);
    Pair p;
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)<=1 and left.isbalanced and right.isbalanced) p.isbalanced=true;
    else p.isbalanced=false;

    return p;
}   



void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    node* root=createTree();
    Pair ans=isBalancedBST(root);
    // cout<<"Height: "<<ans.height<<endl;
    cout<<ans.isbalanced<<endl;
    // inorder(root);
    // cout<<endl;
  
    return 0;

}
