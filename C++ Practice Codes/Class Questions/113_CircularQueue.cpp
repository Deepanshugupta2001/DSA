#include<iostream>
using namespace std;
class Queue{
    int cs,n,*arr,f,r;
    public:
        Queue(int d=5){
            cs=0;
            f=0;
            n=d;
            r=n-1;
            arr=new int[n];
        }

        void push(int d){
            if(cs<n){
                r=(r+1)%n;
                arr[r]=d;
                cs++;
            }
            else{
                cout<<"Overflow\n";
            }
        }

        void pop(){
            if(cs>0){
                f=(f+1)%n;
                cs--;
            }
            else{
                cout<<"Underflow\n ";
            }
        }
        bool empty(){
            return cs==0;
        }
        int front(){
            return arr[f];
        }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // q.push(4);
    // q.push(6);
    // q.push(1);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}