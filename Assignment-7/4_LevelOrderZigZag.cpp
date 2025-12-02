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
    vector<int> d;
	stack<int> s;
    if(!root) return ;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
            node* f=q.front();
            q.pop();

            if(f and i==0){

                cout<<f->data<<" ";
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            else if(f and i!=0){
                // d.push_back(f->data);
                // ctr++;
				s.push(f->data);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            else{
                if(i!=0) {
					while(!s.empty()){
						cout<<s.top()<<" ";
						s.pop();
					}
                    // for(int k=ctr;k>0;k--){
                        // cout<<d[k]<<" ";
                        // d.pop_back();
                	// }
            	}
                i=1-i;
                if(!q.empty()) q.push(NULL);
            }
        }
}

int main()
{
    node *root = build("true");
	levelOrderTraversal(root);
    cout<<endl;
    return 0;
}

