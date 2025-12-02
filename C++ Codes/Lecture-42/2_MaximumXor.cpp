#include<iostream>
using namespace std;
class node{
    public:
        int no;
        node*left,*right;
        node(){
            left=right=NULL;
        }
};

class Trie{
    public: 
        node* root;
        Trie(){
            root=new node();
        }

        void addNumber(int N){
            node* temp=root;
            for (int i = 30;i>=0; i--)
            {
                if(N &(1<<i)){
                    if(!temp->right){
                        node* n=new node();
                        temp->right=n;
                    }
                    temp=temp->right;
                }
                else{
                    if(!temp->left){
                        node* n=new node();
                        temp->left=n;
                    }
                    temp=temp->left;
                }
            }
            temp->no=N;
            
        }
}