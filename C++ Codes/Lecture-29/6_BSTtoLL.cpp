#include<iostream>
#include<climits>
#include<cmath>
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

class Pair{
    public:
        int height;
        bool isBalanced;
};
class Linkedlist{
    public:
        node* head,*tail;
};

Linkedlist bstoLL(node* root){
    //base case
    if(!root) return {NULL,NULL};

    //recursive case
    if (root->left and root->right)
    {
        Linkedlist left=bstoLL(root->left);
        Linkedlist right=bstoLL(root->right);

        left.tail->right=root;
        root->right=right.head;
        return {left.head,right.tail};
    }
    else if(root->left and !root->right){
        Linkedlist left= bstoLL(root->left);
        left.tail->right=root;
        return {left.head, root};
    }
    else if(!root->left and root->right){
        Linkedlist right=bstoLL(root->right);
        root->right=right.head;
        return { root, right.tail};
    }
    else{
        return{root,root};
    }
    
}
Pair isBalancedBST(node* root){
    if(!root) return{0,true};

    Pair left=isBalancedBST(root->left);
    Pair right=isBalancedBST(root->right);

    Pair p;
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)<=1 and left.isBalanced and right.isBalanced)
        p.isBalanced=true;
    else p.isBalanced=false;
    return p;
}
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

node* searchBST(node* root,int key){
    if(!root) return NULL;

    if(root->data== key) return root;
    else if(root->data > key) return searchBST(root->left,key);
    return searchBST(root->right,key);
}

int treeeMin(node* root){
    if(!root) return INT_MAX;



}

bool isBSTFast(node* root,int mi=INT_MIN, int mx=INT_MAX){
    if(!root) return true;

    if(root->data>=mi and root->data<=mx and isBSTFast(root->left,mi,root->data) and isBSTFast(root->right,root->data,mx)) return true;
    else return false;
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
    
    /*preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelOrderTraversal(root);

    if(isBSTFast(root)) cout<<"BST hai\n";
    else cout<<"BST nahi hai\n";*/

    Linkedlist l=bstoLL(root);

    node* head=l.head;
    while(head){
        cout<<head->data<<"-->";
        head=head->right;
    }
    cout<<"NULL \n";

    return 0;
}