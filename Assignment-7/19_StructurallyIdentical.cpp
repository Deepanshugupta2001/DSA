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
bool ans=true;
void isstructurallyidentical(node* root,node* root1){
    if(!root and !root1) {
        // ans=true;
        return ;
    }

    if(root->left and !root1->left) ans=false;
    else if (!root->left and root1->left) ans=false;
	else isstructurallyidentical(root->left,root1->left);

    if(root->right and !root1->right) ans=false;
    else if (!root->right and root1->right) ans=false;
	else isstructurallyidentical(root->right,root1->right);
}
int main()
{
    node *root = build("true");
    node* root1=build("true");
    isstructurallyidentical(root,root1);
    if(ans) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
