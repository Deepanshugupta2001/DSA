#include<iostream>
#include<queue>
#include<vector>
#include<stack>
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
// vector<vector<int>> d;
// vector<int> v;
stack<int> s;
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
node* createTree(int n){
    node* root=NULL;
    int d;
    cin>>d;
    while(n--){
        root=insertinBst(root,d);
        cin>>d;
    }
    return root;
}
int o=0;
void levelOrderTraversal(node* root){
    if(!root) return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* f=q.front();
        q.pop();
        if(f){
            s.push(f->data);
            // v.push_back(f->data);
            // cout<<f->data<<" ";
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        else{
            // cout<<endl;
            // d.push_back(v);
            // for (int s = 0; s < o; s++)
            // {
            //     v.pop_back();
            // }
            
            if(!q.empty()) q.push(NULL);
        }
    }
}
int height(node* root){
    if(!root) return 0;

    return max(height(root->left),height(root->right))+1;
}
int main(){
    int n;
    cin>>n;
    node* root=createTree(n);
    // levelOrderTraversal(root);
    int a,b;
    cin>>a>>b;
    int ha=height(a);
    
    int ctr=0;
    // bool ekmila=false,donomile=false;
    while(!s.empty()){
        if((s.top()==a) || (s.top()==b)){
            // ekmila=true;
            ctr++;
        }
        if(ctr==2){
            cout<<s.top()<<endl;
            break;
        }

        s.pop();
    }
    // int r=d.size();
    // if(a<b){
    //     for (int k = 0; k<r; k++)
    //     {   
    //         for (int x = 0;v[x]; x++)
    //         {
    //         }   
    //         if(d[k]==a) {
    //             // cout<<v[k]<<endl;
    //             c=k;
    //             break;
    //         }
    //     }
    //     for (int p = 0; p < c; p++)
    //     {
    //         if(v[k])
    //     }
        
        
    // }
    // else if(a>b){
    //     for (int k = 0; k<n; k++)
    //     {
    //         if(v[k]<b){
    //             cout<<v[k]<<endl;
    //             break;
    //         }
    //         else if(v[k]==b) {
    //             cout<<v[k]<<endl;
    //             break;
    //         }
    //     }
        
    // }
    return 0;

}
