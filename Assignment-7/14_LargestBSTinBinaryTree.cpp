#include<iostream>
#include<climits>
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

int pre[];
int in[];
int i=0;

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

    node* root=new node(pre[i]);
    i++;
    int k;
    for (int j = s; j <=e ; j++)
    {
        if(in[j]==root->data){
            k=j;
            break;

        }
        

    }
    root->left=createTree(s,k-1);
    root->right=createTree(k+1,e);

    return root;
    
}
int ctr=0,maximum=0;
vector<int> v;
// int isBSTFast(node* root,int mi=INT_MIN,int mx=INT_MAX){
//     if(!root) return 0;

//     if(root->data>=mi and root->data<=mx and isBSTFast(root->left,mi,root->data) and isBSTFast(root->right,root->data,mx)) ctr++;
//     // else return false;

//     return ctr;

// }
void bstinbinarytree(node* root){
    if(!root) return ;
    bool ans=false;
    if(root->left and root->left->data<root->data){
        v.push_back(root->left->data);
        v.push_back(root->data);
        ans=true;
    }
    if(root->right and root->right->data>root->data){
        if(ans) v.push_back(root->right->data);
        else {
            v.push_back(root->data);
            v.push_back(root->right->data);   
        }
    }

}
vector<int> helper(node* root){
        // edge cases
        if(root == NULL) return {1, 0, INT_MAX, INT_MIN};
        
        // leaf node
        if(root->left == NULL && root->right == NULL) return {1, 1, root->data, root->data};
        
        vector<int> answerFromLeft = helper(root->left);
        vector<int> answerFromRight = helper(root->right);
        
        if(answerFromLeft[0] == 1 && answerFromRight[0] == 1 && root->data > answerFromLeft[3] && root->data < answerFromRight[2]){
            int x = answerFromLeft[2]; // left ka mini
            int y = answerFromRight[3]; // right ka maxi
            
            if(x == INT_MAX) x = root->data;
            if(y == INT_MIN) y = root->data;
            
            return {1, answerFromLeft[1]+answerFromRight[1]+1, x, y};
        }
        
        return {0, max(answerFromLeft[1], answerFromRight[1]), 0, 0};
}
int largestBst(node *root)
{
    	vector<int> ans = helper(root);
    	
    	return ans[1];
}

int main(){
    int n;
    cin>>n;
    for (int j = 0; j < n; j++)
    {
        cin>>pre[j];
    }
    for (int k = 0; k < n; k++)
    {
        cin>>in[k];
    }    
    node* root=createTree(0,n-1);
    // int ans=isBSTFast(root);
    // cout<<ans<<endl;
    int k=largestBst(root);
    cout<<k<<endl;
    return 0;
}