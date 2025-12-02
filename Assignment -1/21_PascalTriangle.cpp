#include<iostream>
using namespace std;
int fact(int n){
    //base case 
    if(n==0) return 1;

    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    int k=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {             
            cout<<(fact(i-1)/(fact(j-1)*fact(i-j)))<<'\t';
        } 
        cout<<endl;   
    }
    return 0;
}
