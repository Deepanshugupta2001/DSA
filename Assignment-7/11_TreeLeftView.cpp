#include<iostream>
#include<queue>
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

    // //recursive case
    // node*root=new node(d);
    // root->left=buildTree();
    // root->right=buildTree();

    queue<node*> q;
    node* root=new node(d);
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        q.pop();
        cin>>d;
        if(d==-1) {
            f->left=NULL;
            break;
        }
        f->left=new node(d);
        q.push(f->left);
        cin>>d;
        if(d==-1) {
            f->right=NULL;
            break;
        }

        f->right=new node(d);
        q.push(f->right);

    }

    return root;
}

void lefttreeview(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    if(root->left) lefttreeview(root->left);
    else if(!root->left) lefttreeview(root->right);
}
// void preorder(node* root){
//     if(!root) return;

//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);

// }
// void printleafnodes(node* root){
//     if(!root) return;
//     if(root->left==NULL and root->right==NULL){
//         cout<<root->data<<" ";
//     }
//     printleafnodes(root->left);
//     printleafnodes(root->right);
// }
int i=0;
vector<int> v;
void levelOrderTraversal(node* root){
    if(!root) return;

    queue<node*> q;
    q.push(root);
    cout<<root->data<<" ";
    q.push(NULL);
    while(!q.empty()){
        node* f=q.front();
        q.pop();
        if(f){
            v.push_back(f->data);
            i++;
            // cout<<f->data<<" ";
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        else{
            // cout<<endl;
            if(i!=0) cout<<v[0]<<" ";
            for (int k = 0; k < i; k++)
            {
                v.pop_back();
            }
            if(!q.empty()) q.push(NULL);
        }
    }
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    node* root=buildTree();
    // printleafnodes(root);
    // cout<<endl;
    levelOrderTraversal(root);
    return 0;
}