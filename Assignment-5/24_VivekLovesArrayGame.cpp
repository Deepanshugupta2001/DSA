// #include<iostream>
// using namespace std;
// void arraygame(int n,int i,int sum1,int sum2,int *a,int *b,int*c,int &ctr){
//     //base case
//     if(i==n){
//         return;
//     }


//     //recursive case
//     b[i]=a[i];
//     cout<<b[i]<<endl;
//     for (int i = 0; b[i]!='\0'; i++)
//     {
//         cout<<b[i]<<" ";
//     }
//     cout<<endl;
//     sum1+=b[i];
//     for (int j = i+1,k=0,m=0; j < n || k<i || m<n; j++ ,k++,m++)
//     {
//         c[m]=a[j]-b[k];
//         sum2+=c[i];
//         cout<<c[m]<<endl<<sum2<<endl;
//     }
//     // if(sum1==sum2){
//     //     ctr++;
//     //     //ek baar left vala ko neglect karo
//     //     arraygame(n,i+1,0,0,c,0,0,ctr);
//     //     //ek baar right valo lo neglect karo
//     //     arraygame(n-i-1,i+1,0,0,b,0,0,ctr);
//     // }
//     // else{
//     //     arraygame(n,i+1,sum1,sum2,a,b,c,ctr);
//     // }
    
// }
// int main(){
//     int t;
//     cin>>t;
//     // while(t--){
//     int n;
//     cin>>n;
//     int a[28],b[n],c[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int ctr=0;
//     arraygame(n,0,0,0,a,b,c,ctr);
//     cout<<"I changes"<<endl;
//     arraygame(n,1,0,0,a,b,c,ctr);

//     // cout<<ctr<<endl;
//     // }
//     return 0;
    
// }

#include<iostream>
using namespace std;
int vgarray(int *a,int s,int e){
    int suma=0,sumb=0,ans=0,ts=0;
    if(s>e || (ts%2!=0)) return 0;
    for (int i = 0;a[i]!='\0'; i++)
    {
        ts+=a[i];
    }
    
    for (int i = s; i < e; i++)
    {
        suma+=a[i];
        sumb=ts-suma;
        if(suma==sumb){
            ans=1+max(ans,max(vgarray(a,s,i)+1,vgarray(a,i+1,e)+1));
        }
    }
    return ans;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int ts=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            // ts+=a[i];
        }
        int ctr=vgarray(a,0,n-1);
        cout<<ctr<<endl;
        
    }
    return 0;
}