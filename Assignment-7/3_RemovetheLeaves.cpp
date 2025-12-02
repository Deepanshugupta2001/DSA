#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}
// void preorder(node* root){
//     if(!root) return;

//     // cout
// }
// void inorder(node* root){
//     if(!root) {
//         // cout<<"END";
//         return ;
//     }
//     inorder(root->left);
//     if(root->left==NULL) cout<<"END => ";
//     else cout<<root->data<<" => ";
//     // inorder(root->right);
// }
// void printright(node* root){
//     if(!root) {
//         // cout<<"END";
//         return;
//     }
//     if(root->right==NULL) cout<<" <= END";
//     else cout<<root->data<<"<=";
//     printright(root->right);
// }
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

void removeleaves(node* root){
    // if(!root) {
    //     return NULL;
    //     preorder(root);
    //     printright(root);
    //     cout<<endl;
    // }
    
    // removeleaves(root->left);
    // removeleaves(root->right);
    // return root;

    if(!root) return;
	if(root->left){
    if(root->left->left==NULL and root->left->right==NULL){
        root->left=NULL;
        // printTree(root);
        // inorder(root);
        // printright(root);
    }
	}
	if(root->right){
    if(root->right->left==NULL and root->right->right==NULL){
        root->right=NULL;
        // printTree(root);
        // inorder(root);
        // printright(root);
    }
	}
    removeleaves(root->left);
	removeleaves(root->right);
	
}


int main()
{
    node *root = build("true");
    removeleaves(root);
	printTree(root);
    // inorder(root);
    // printright(root);
    // cout<<endl;
    return 0;
}
