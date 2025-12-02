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
int treemin(node* root){
    if(!root) return INT_MAX;

    int left_min=treemin(root->left);
    int right_min=treemin(root->right);

    return min(root->data,min(left_min,right_min));
}
int treemax(node* root){
    if(!root) return INT_MIN;

    int left_max=treemax(root->left);
    int right_max=treemax(root->right);

    return max(root->data,max(left_max,right_max));
}

bool isBst(node* root){
    if(!root) return true;

    int left_max=treemax(root->left);
    int right_min=treemin(root->right);

    if(root->data< left_max || root->data> right_min) return false;

    bool isBSTLeft=isBst(root->left);
    bool isBSTRight=isBst(root->right);

    return isBSTLeft and isBSTRight;
}
// node* searchnode(node* root,int key){
//     if(!root) return NULL;

//     if(root->data==key) return root;
//     else if(root->data<key) searchnode(root->right,key);
//     else if(root->data>key) searchnode(root->left,key);
// }
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
bool isBSTFast(node* root,int mi=INT_MIN,int mx=INT_MAX){
    if(!root) return true;

    if(root->data>=mi and root->data<=mx and isBSTFast(root->left,mi,root->data) and isBSTFast(root->right,root->data,mx)) return true;
    else return false;

}
// void postorder(node* root){
//     if(!root) return ;

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
int main(){
    node* root=createTree();
    if(isBst(root)) cout<<"BST hai\n";
    else cout<<"BST nhi HAi"<<endl;
    if(isBSTFast(root)) cout<<"BST hai\n";
    else cout<<"BST nhi hai\n";
    inorder(root);
    cout<<endl;
  
    return 0;

}
