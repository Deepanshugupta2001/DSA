#include<iostream>
using namespace std;
int main()
{
    int n,row,i;
    cin>>n;

    for(row=1;row<=n;++row){
        //1.Print row times '*'
        for(i=1;i<=row;i++){
            cout<<"*";
        }

        //2. Print Space

        cout<<" ";

        //3. Print n-row+1 times '*'
        for(i=1;i<=n-row+1;i++){
            cout<<"*";
        }

        //4. Print ' '
        cout<<" ";

        //5. Print n-row+1 times "*"
        for(i=1;i<=n-row+1;i++){
            cout<<"*";
        }

        //6. Print ' '
        cout<<" ";

        //7. Print row times "*"
        for(int i=1;i<=row;i++){
            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}
    
    /*for(row=1;row<=n;row++)
    {
        cout<<"*";
    
    cout<<" ";
    for(i=1;i<=(n-row+1);i++){
        cout<<"*";
    }
    cout<<" ";
    for(i=1;i<=(n-row+1);i++)
    {
        cout<<"*";
    }
    cout<<" ";
    for(row=1;row<=n;row++)
    {
        cout<<"*";
    }
    }
    cout<<endl;*/
