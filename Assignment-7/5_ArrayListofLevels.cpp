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
int i=0,ctr=0;
void levelOrderTraversal(node* root) {
    // vector<vector<int>> v;
    vector<int> d;

    if(!root) return ;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    cout<<"[";
    while(!q.empty()){
            node* f=q.front();
            q.pop();
            
            if(f){

                // cout<<f->data<<" ";
                d.push_back(f->data);
                i++;
                // daalnahaikya=true;
                // i++;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            else{
                // cout<<endl;
                // v.push_back(d);
                if(i>1){
                    cout<<"[";
					int k;
                    for( k=0;k<i-1;k++){
                        cout<<d[k]<<", ";
						
                    }
					cout<<d[k];
                    cout<<"]";
                    for (int j = i; j >0; j--)
                    {
                       d.pop_back();
                    }
                }
                else{
                    cout<<"[";
					for(int j=0;j<i;j++){
						cout<<d[j];
					}
					cout<<"]";
					d.pop_back();
                }
                i=0;
                if(!q.empty()){
                    q.push(NULL);
                    cout<<", ";
                }
            }
        }
        cout<<"]";
        cout<<endl;
}

int main()
{
    node *root = build("true");
	levelOrderTraversal(root);
    cout<<endl;
    return 0;
}

