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
    node* root=new node(d);
    root->left=buildTree();
    root->right=buildTree();

    return root;

}

node* searchnode(node* root,int key){
    if(!root) return NULL;

    if(root->data==key) return root;
    node* ans=searchnode(root->left,key);
    return ans;
    return searchnode(root->right,key);
}
int main(){
    node* root=buildTree();
    node* x=searchnode(root,10);
    if(x) cout<<"Found "<<x->data<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}