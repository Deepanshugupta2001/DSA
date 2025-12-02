#include<iostream>
#include<climits>
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
int n,maximum=INT_MIN,sum=0,sum1=0;
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
void findmaximum(node* root){
    if(!root) return;

    findmaximum(root->right);
    if(root->data>maximum) maximum=root->data;
    findmaximum(root->left);
}
void sumreplacingnodes(node* root){
    if(!root){
        return;
    }

    sumreplacingnodes(root->right);
    sum+=root->data;
    
	// cout<<sum<<" : ";
    if(root->data==maximum) root->data=0;
    else root->data=sum1;
    sum1=sum;
	// cout<<root->data<<" : "<<endl;
    sumreplacingnodes(root->left);
    // sum+=root->data;
	// cout<<sum<<" : ";

    // root->data=sum;
	// cout<<root->data<<" : "<<endl;



}
void preorder(node* root){
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void printTree(node* root) {
    if (root == NULL) return;
    
    
    
    if (root->left) cout << root->left->data;
    else cout << "END";

    cout << " => ";

    cout << root->data << " <= ";

    if (root->right) cout << root->right->data;
    else cout << "END";
    
    cout << endl;

    printTree(root->left);

    printTree(root->right);

}

int main(){
    cin>>n;
    node* root=createTree();
	sumreplacingnodes(root);
    printTree(root);
    // preorder(root);
    cout<<endl;
  
    return 0;

}