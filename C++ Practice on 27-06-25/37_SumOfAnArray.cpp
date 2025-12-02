#include<iostream>
using namespace std;
int Sum(int *a,int n,int sum){ //Isma n ko kaam karte jaa raha hai. Basically reverse jaa raha hai array ma and sum ma elements ko add karte jaa raha hai
    if(n==0) return sum;

    sum+=a[n-1];
    Sum(a,n-1,sum);
}
int Sum2(int *a,int n,int sum){ //Isma n ko bhi kaam kar raha hai and a ko bhi increase kar raha hai. Basically we are adding the first element of the array and array joh starting ma point karta hai usko ek aage badata jaa raha hai
    if(n==0) return sum;

    sum+=a[0];
    Sum2(a+1,n-1,sum);
}
int Sum3(int* a,int n,int i){ //Yeh normal iterative tarika hai sum add karna ka joh hum usually karta hai ek pointer i=0 leke till the end of the array
    if(i==n) return 0;

    return a[i]+Sum3(a,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<Sum(a,n,0)<<endl;
    cout<<Sum2(a,n,0)<<endl;
    cout<<Sum3(a,n,0)<<endl;
    return 0;
}