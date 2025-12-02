#include<iostream>
using namespace std;
class node{
    public:
        int k;
        int v;
        node* next;

        node(int k,int v){
            this->k=k;
            this->v=v;
            this->next=next;
        }
};

class HashMap{
    int n; //to store the hash table capacity
    int m; //to store the hash table size
    double l; //to store the load factor threshold

    node** t; //to stre the address of the dynamic array that represents the hash table

    int hashFn(int k){
        //transform k into a hash index
        return k%n;
    }
    void transfer(node* head){
        //1.Rehash (k,v) pairs present in the linkedlist represented by "head" pointer to the updated hashMap
        node* temp=head;
        while(temp!=NULL){
            insert(temp->k,temp->v);
            temp=temp->next;
        }
        //2. Release Memory allocated for the LinkedList represented by "head" pointer
        while(head!=NULL){
            temp=head;
            head=head->next;
            delete temp;
        }
    } 

    void rehash(){
        //1. Save pinter to the current hashMap and its Capacity
        node** oldT=t;
        int oldN=n;

        //2.Create a hashMap with double capacity
        n=2*n;
        t=new node*[n];
        for (int i = 0; i < n; i++)
        {
            t[i]=NULL;
        }
        m=0; //newly created table is empty

        //3.transfer (k,v) pairs from old hashMap to the updated hashMap
        for (int i = 0; i < oldN; i++)
        {
            transfer(oldT[i]);
        }
        //4. release the memory allocated to the old hashMap
        
        delete [] oldT;
    }

    public:
        HashMap(int n=5,double l=0.7){
            this->n=n;
            this->m=0;
            this->l=l;

            t=new node*[n];
            for (int i = 0; i <n; i++)
            {
                t[i]=NULL; //initially the linked list at each bucket is empty
            }
        }
        void insert(int k,int v){
            //1. Transform the key into hash index using the has function
            int hashIdx=hashFn(k);
            //2.Create a node with the given (k,v) pair and insert it at the head of the linkedlist stored at the index
            node *no=new node(k,v);
            
            //3.Update the pointer to the head of the linkedlist stored at the hash index such that it holds the address of the newly created node
            no->next=t[hashIdx];
            t[hashIdx]=no;
            m++;

            //4.Rehash,if loadfactor exceeds the loadfactor threshold
            double loadFactor=(double)m/n;
            if(loadFactor>l){
                //..rehash
                cout<<"Rehashing due to LF= "<<loadFactor<<endl;
            }
        }

        node* find(int k){
            //1.Transform the key into hash index using the hash Function

            int hashIdx=hashFn(k);

            //2. Search for the node with the given key in the linkedlist stored at the hash index

            node* temp=t[hashIdx];
            while (temp!=NULL)
            {
                if(temp->k==k){
                    //you've found the node you were looking for
                    break;
                }
                temp=temp->next;
            }
            return temp;
            
        }

        void erase(int k){
            //1.Transform the key into hash index using the hash function
            int hashIdx=hashFn(k);

            //2.Delete the node with the given key from the linkedlist stored at the hash index
            node* prev=NULL;
            node* cur=t[hashIdx];
            if(cur==NULL){
                //linkedlist at hashIdx is empty therefore key doesn't exist
                return;
            }
            if(cur->k==k){
                t[hashIdx]=cur->next;
                delete cur;
                m--;
                return;
            }

            while(cur!=NULL){
                if(cur->k==k){
                    //delete the cur node
                    prev->next=cur->next;
                    delete cur;
                    m--;
                    break;
                }
                prev=cur;
                cur=cur->next;
            }
        }
        void printLinkedList(node* head){
            while(head!=NULL){
                cout<<"("<<head->k<<", "<<head->v<<")";
                head=head->next;
            }
        }
        void printHashMap(){
            //iterate over buckets in the hashMap
            for (int i = 0; i < n; i++)
            {
                //print the LinkedList stored at the ith bucket of the hashMap
                cout<<i<<" : ";
                printLinkedList(t[i]);
                cout<<endl;
            }
            cout<<endl;
        }
};

int main(){

    HashMap hm;
    hm.insert(7,49);
    hm.insert(2,4);
    hm.insert(6,36);

    hm.printHashMap();

    int key=7;
    node* o=hm.find(key);
    o!=NULL? cout<<o->v<<endl : 
}