#include<iostream>
using namespace std;
int main()
{
    int n, row, space, i, no;
    cin>>n;
    row=1;
    while(row<=n){

        //1.Print n-row times spaces
        space=1;
        while(space<=n-row){
            cout<<" ";
            space=space+1;
        }
        
        //2.Print row times increasing numbers,no=row times
        no=row;
        i=1;
        while(i<=row)
        {
            cout<<no;
            no=no+1;
            i=i+1;
        }

        //3.Print row-1 times decreasing numbers,no=2*row-2

        no=2*row-2;
        i=1;
        while(i<=row-1){
            cout<<no;
            no=no-1;
            i=i+1;
        }
        cout<<endl;
        row=row+1;
    }

    return 0;
}