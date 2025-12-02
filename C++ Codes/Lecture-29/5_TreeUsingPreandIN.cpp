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

int pre[]={8,10,1,6,4,7,3,14,13};
int in[]={1,10,4,6,7,8,3,13,14};
int i=0;

node* createTree(int s,int e){
    //base case
    if(s>e) return NULL;

    //recursive case
    node* root=new node(pre[i+1]);
    int k;
    for (int j = s; j <= e; j++)
    {
        if(in[j]==root->data){
            k=j;
            break;
        }
    }

    root->left=createTree(s,k-1);
    root->right=createTree(k+1,e);
    return root;
    
}



// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){
    int n=sizeof(pre)/sizeof(int);
    node* root=createTree(0,n-1);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    

    return 0;
} 