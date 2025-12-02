#include<iostream>
#include<vector>
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
int m;
int n;
// int pre[]={8,10,1,6,4,7,3,14,13};
// int in[]={1,10,4,6,7,8,3,13,14};
vector<int> pos(m),in(n);
int i=m-1;
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
node* createTree(int s,int e){
    if(s>e) return NULL;

    node* root=new node(pos[i]);
    cout<<pos[i];
    i--;
    int k;
    // for (int j = s; j <=e ; j++)
    // {
    //     if(in[j]==root->data){
    //         k=j;
    //         break;

    //     }
        

    // }
    // root->right=createTree(k+1,e);
    // root->left=createTree(s,k-1);


    return root;
    
}

int main(){
    cin>>m;
    for (int j = 0; j < m; j++)
    {
        cin>>pos[j];
    }
    int n;
    cin>>n;
    for (int k = 0; k < n; k++)
    {
        cin>>in[k];
    }
    // node* root=new node(pre[n-1]);
    
    node* root=createTree(0,m-1);
    // printTree(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;

    return 0;
}