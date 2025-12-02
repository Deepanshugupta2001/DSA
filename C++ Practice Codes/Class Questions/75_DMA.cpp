#include<iostream>
using namespace std;
int main(){
    int *a=new int;
    *a=10;
    cout<<*a<<endl;
    // To create Array
    int *arr=new int[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i]=i+1;
    }
    for (int i = 0; i < 20; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //To delete integer bucket
    delete a;
    a=NULL;

    // cout<<*a;  If we do not equate a=NULL then a will contain some garbage value

    delete []arr;
    arr=NULL;
    // for (int i = 0; i < 20; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    arr=new int[30];
    for (int i = 0; i < 30; i++)
    {
        arr[i]=i+1;
    }
    for (int i = 0; i < 30; i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    arr=NULL;
    
    return 0;
    
}