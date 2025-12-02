#include<iostream>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);

    //Bubble Sort Algo

    for(int i=0;i<n-1;i++){
        
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                //swap a[j],a[j+1]
                /*  Way 1:-
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                */
                 /*Way 2:-
                 a[j]=a[j]+a[j+1];
                 a[j+1]=a[j]-a[j+1];
                 a[j]=a[j]-a[j+1];
                 */
                //Way 3:-
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
                

               //swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}