#include<iostream>
using namespace std;
// #include"treetraversal.h"
class node{
    public:
        int data;
        node* left,*right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};
int n,maximum,sum=0;
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
    while(n--){
        root=insertinBst(root,d);
        cin>>d;
    }
    return root;
}
void sumreplacingnodes(node* root){
    if(!root){
        return;
    }

    if(root->right) sumreplacingnodes(root->right);
    sum+=root->data;
    root->data=sum;
    if(root->left) sumreplacingnodes(root->left);
    sum+=root->data;
    root->data=sum;



}
void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    cin>>n;
    node* root=createTree();
    sumreplacingnodes(root);
    preorder(root);
    cout<<endl;
  
    return 0;

}
