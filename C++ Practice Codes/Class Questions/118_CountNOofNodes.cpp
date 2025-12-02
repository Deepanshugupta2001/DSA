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

int countnodes(node* root){
    if(!root) return 0;

    return 1+countnodes(root->left)+countnodes(root->right);
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root=buildTree();
    cout<<"No. of NOdes in Tree: "<<countnodes(root)<<endl;
    return 0;
}