#include<iostream>
#include<algorithm>
using namespace std;
// int m,n;
// int a[m][n];
// void modifymatrix(int *arr,int i,int n,int a[m][n],int k){
//     sort(arr,arr+k);
//     int l=0;
//     for (int j = 0; j < n; j++)
//     {
//         a[i][j]=arr[l];
//         l++;
//     }
    
// }
int main(){
    int m,n;
    cin>>m>>n;

    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int k=0;
		int arr[n];
        for (int j = 0; j < n; j++)
        {
            arr[k]=a[i][j];
            k++;
        }
		
        // modifymatrix(arr,i,n,(int *)a,k);
        sort(arr,arr+k);
    	int l=0;

        for (int j = 0; j < n; j++)
        {
            a[i][j]=arr[l];
            l++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
        
}