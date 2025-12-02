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

void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int countNodes(node* root){
    //base case
    if(!root) return 0;


    //recursive case
    int x=countNodes(root->left);
    int y=countNodes(root->right);
    return 1+x+y;

}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root=buildTree();
    preorder(root);
    cout<<endl;
    cout<<countNodes(root)<<endl; 
    return 0;
}