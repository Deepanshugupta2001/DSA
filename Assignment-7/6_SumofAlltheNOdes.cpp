#include <iostream>
#include<stack>
#include <queue>
#include<vector>
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
int sum=0;
int sumofnodes(node* root){
    if(!root) return 0;

    sum+=root->data;
    sumofnodes(root->left);
    sumofnodes(root->right);

    return sum;
}

int main()
{
    node *root = build("true");
    cout<<sumofnodes(root)<<endl;
    return 0;
}

