#include<iostream>
using namespace std;
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
    int arr[n],b[m];
    int k=0,l=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]==1){
                arr[k]=j;
                b[l]=i;
                k++;
                l++;
            }
        }
    }
    cout<<endl;
    cout<<"Printing after Input: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int x=0,y=0;
	bool milgaya;
    for (int i = 0; i < m; i++)
    {
		milgaya=false;
        for (int j = 0; j < n; j++)
        {
            if(i==b[x]){
                a[i][j]=1;
				milgaya=true;
            }
        }
        if(milgaya) x++;
    }
    cout<<"Printing after row modification: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int j = 0; j < n; j++)
    {
		milgaya=false;
        for (int i = 0; i < m; i++)
        {
            if(j==arr[y]){
                a[i][j]=1;
				milgaya=true;
            }
        }
		if(milgaya) y++;
    }
    
    cout<<"Final Print (answer): "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	cout<<endl;
    return 0;
    
    
}