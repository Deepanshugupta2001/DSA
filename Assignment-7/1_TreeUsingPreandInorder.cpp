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

int pre[10000];
int in[10000];
int i=0;

void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void levelOrderTraversal(node* root){
    if(!root) return;

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
            // cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
    }
}
void inorder(node* root){
    if(!root) return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
node* createTree(int s,int e){
    if(s>e) return NULL;

    node* root=new node(pre[i]);
    i++;
    int k;
    for (int j = s; j <=e ; j++)
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
int main(){
    int n;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>pre[k];
	}
	for(int j=0;j<n;j++){
		cin>>in[j];
	}
    node* root=createTree(0,n-1);
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
	levelOrderTraversal(root);
	cout<<endl;
    return 0;
}