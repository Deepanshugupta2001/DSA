#include<iostream>
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
node* searchnode(node* root,int key){
    if(!root) return NULL;

    if(root->data==key) return root;
    else if(root->data<key) searchnode(root->right,key);
    else if(root->data>key) searchnode(root->left,key);
}
// void preorder(node* root){
//     if(!root) return;

//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
void inorder(node* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// void postorder(node* root){
//     if(!root) return ;

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
int main(){
    node* root=createTree();
    node*ans=searchnode(root,10);
    if(ans) cout<<"Found: "<<ans->data<<endl;
    else cout<<"Not Found"<<endl;
    inorder(root);
    cout<<endl;
  
    return 0;

}
