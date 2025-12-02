#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

TreeNode* insert(TreeNode* root, int key) {
    // base case
    if(root == NULL) return new TreeNode(key);
    // recursive case
    if(key < root->val) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

void helper(TreeNode* root) {
    // base case
    if(root == NULL) return;
    // recursive case
    
    helper(root->left);
    helper(root->right);
    
    TreeNode* dup = new TreeNode(root->val);
    dup->left = root->left;  // original left child ko dup ka left
    root->left = dup;        // dup ko left child of original
}

void printTree(TreeNode* root) {
    if (root == NULL) return;
    
    
    
    if (root->left) cout << root->left->val;
    else cout << "END";

    cout << " => ";

    cout << root->val << " <= ";

    if (root->right) cout << root->right->val;
    else cout << "END";
    
    cout << endl;

    printTree(root->left);

    printTree(root->right);

}

int main() {

    
    int n;
    cin >> n;

    TreeNode* root = NULL;
    int val;
    while(n--) {
        cin >> val;
        root = insert(root, val);
    }
    
    helper(root);
    printTree(root);
    
    return 0;
}