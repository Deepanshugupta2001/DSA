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

class Pair{
    public:
        int height;
        int diameter;
};

Pair fastDiameter(node* root){
    if(!root) {
        Pair p;
        p.height=p.diameter=0;
        return p;
    }

    Pair left=fastDiameter(root->left);
    Pair right=fastDiameter(root->right);
    Pair p;
    p.height=max(left.height,right.height)+1;
    int op1=left.height+right.height;
    int op2=left.diameter;
    int op3=right.diameter;
    p.diameter=max(op1,max(op2,op3));

    return p;
}
int main(){
    node* root=buildTree();
    Pair ans=fastDiameter(root);
    cout<<"Tree Height: "<<ans.height<<endl;
    cout<<"Tree Diameter: "<<ans.diameter<<endl;
    return 0;
}