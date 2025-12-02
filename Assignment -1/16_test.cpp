#include<iostream>
using namespace std;
int main(){
    /*int n,k;
    cin>>n;
    for(int i=1;i<=n;i++){
        //1. Print n-1 times spaces in decreasing order.
        for(int j=n-1;j>=i;j++){
            cout<<'\t';
        }
        //2. print row times incresing numbers
        for(int k=1;k<=i;k++){
            cout<<k<<'\t';
        }
        k--;
        //3. Print row times decreasing numbers.
        for(int k=1;k<i;k--){
            cout<<k<<'\t';
        }
        cout<<endl;
    }*/

   /*int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=n-1;j>=1;j++){
        cout<<" ";
    }
    for(int k=1;k<=n;k++){
        cout<<" *";
    }
    cout<<endl;
   }
   return 0;*/

   int n;
   cin>>n;
   int i=1;
   int k=n-1;
   while(i<=n){
    while(k>=1){
        cout<<" ";
        k--;
    }
    cout<<" *";
    i++;
    cout<<endl;

   }
}