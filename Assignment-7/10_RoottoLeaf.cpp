#include <iostream>
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
vector<int> v;
// void searchnode(node* root,int key){
//     if(!root) return ;

//     if((root->data==key) ) {
        
//         int n=v.size();
//         for (int k = 0; k < n; k++)
//         {
//             sum+=v[k];
//             // cout<<v[k]<<" ";
//         }
//         if(sum==key){
//             for (int h = 0; h < n; h++)
//             {
//                 cout<<v[h]<<" ";
//             }
            
//         }
    
//     }
        

//     else if(root->data<key) {
//         // sum+=root->data;
//         v.push_back(root->data);
//         searchnode(root->right,key);
//         v.pop_back();
//     }
//     else if(root->data>key) {
//         // sum+=root->data;
//         v.push_back(root->data);
//         searchnode(root->left,key);
//         v.pop_back();
//     }
// }
int key;
void sumofnodeskey(node* root){
    if(!root ){
        if(sum==key){
        for (int j = 0; j < v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
        return;
    }
    // else if(!root) {
    //     for (int m = 0; m < v.size(); m++)
    //     {
    //         v.pop_back();
    //     }
    //     sum=0;
    //     return;
    // }
    sum+=root->data;
    v.push_back(root->data);
    sumofnodeskey(root->left);
    sum-=root->data;
    v.pop_back();
    sumofnodeskey(root->right);
}

int main()
{
    node *root = build("true");
    // int key;
    cin>>key;
    // searchnode(root,key);
    sumofnodeskey(root);
	cout<<endl;
    return 0;
}
