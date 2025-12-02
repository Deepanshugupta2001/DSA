#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        //1.Print row times '*'
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        //2.Print Space
        cout<<" ";

        //3. (n-row+1) times space
        for(int i=1;i<=(n-row+1);i++){
            cout<<"*";
        }
        //4.Print space
        cout<<" ";
        //5. (N-row+1) times *
        for(int i=1;i<=(n-row+1);i++){
            cout<<"*";
        }
        //6. print space
        cout<<" ";
        //7. row times *
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        //8. next line
        cout<<endl;
    }
}