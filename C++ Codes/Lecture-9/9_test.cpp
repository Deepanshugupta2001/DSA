#include<iostream>
#include<climits>
using namespace std;
int main()
{
    /*int a[5];
    int n;
    cin>>n;
    //Input for array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Outputting the array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/

    /*int a[1000];
    int n;
    cout<<"Enter the no.(max:1000) : ";
    cin>>n;
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;*/

    //Read 10 no.s and print them in reverse order
    /*int a[100];
    int n;
    cout<<"Enter the no.s(max:100) :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }*/

    //Linear Search
    /*int a[100];
    int n;
    cout<<"Enter the no.s(max:100) :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cout<<"Enter the number you want to search: ";
    cin>>num;
    bool ctr;
    for(int i=0;i<n;i++){
        ctr=false;
        if(num=a[i]){
            cout<<"Number found at "<<i<<" index/position in the array"<<endl;
            ctr=true;
            break;
        }
    }

    if(ctr==false){
        cout<<"Not Found";
    }
*/
    /*int a[100];
    int n,lar;
    cout<<"Enter the number : ";
    cin>>n;
    lar=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }

    cout<<"The largest number in the array is: "<<lar<<endl;*/
    //Bubble Sort
    int a[]={5,4,3,2,1};
    int n;
    n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                //Way 1:-
                /*int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;*/

                //Way 2:-
                /*a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];*/

                //Way 3:-
                //a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);

                //Way 4:-
               // swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/

    cout<<endl;
    return 0;
}