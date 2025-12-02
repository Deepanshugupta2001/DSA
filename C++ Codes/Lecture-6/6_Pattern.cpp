#include<iostream>
using namespace std;
int main()
{
    int n,number;
    cin>>n;

    for(int row=1; row<=n;row++){
        //If row is even :number starts with 0
        if(row%2 == 0){
            number=0;
        }
        //If row is odd: number starts with 1
        else{
            number=1;
        }
        //Print row times number
        for(int i=1; i<=row; i++)
        {
            cout<<number<<" ";
            number=1-number;
        }
        cout<<endl;
    }

    return 0;

}