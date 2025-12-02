#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* left,*right;
        node(int d){
            data=d;
            left=right=NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;
    if(d==-1) return NULL;

    //recursive case
    node*root=new node(d);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}

int height(node* root){
    if(!root) return 0;

    return max(height(root->left),height(root->right))+1;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root=buildTree();
    cout<<"Height of Tree: "<<height(root)<<endl;
    return 0;
}