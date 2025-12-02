#include<iostream>
#include<queue>
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

node* insertInBST(node*root, int data){
    if(!root){
        root=new node(data);
        return root;
    }
    if(root->data>data){
        root->left=insertInBST(root->left,data);
        return root;
    }
    else{
        root->right=insertInBST(root->right,data);
        return root;
    }
}

node* createTree(){
    node*root= NULL;

    int data;
    cin>>data;
    while(data!=-1){
        root=insertInBST(root,data);
        cin>>data;
    }
    return root;
}

void printRange(node* root,int k1,int k2){
    if(!root) return;

    if(root->data>=k1 and root->data<=k2) cout<<root->data<<" ";

    if(root->data>k2) printRange(root->left,k1,k2);
    else if(root->data<k1) printRange(root->right,k1,k2);
    else{
        printRange(root->left,k1,k2);
        printRange(root->right,k1,k2);
    }

}
void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(!root) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root == NULL) return ;

    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<" ";
}

void levelOrderTraversal(node* root){
    if(!root) return ;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
            node* f=q.front();
            q.pop();
            if(f){
                cout<<f->data<<" ";
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            else{
                cout<<endl;
                if(!q.empty()) q.push(NULL);
            }
        }
    }

int main(){
    node* root=createTree();
    printRange(root,2,8);
    /*preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelOrderTraversal(root);*/

    return 0;
}