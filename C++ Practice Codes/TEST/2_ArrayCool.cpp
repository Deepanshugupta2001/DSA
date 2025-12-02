#include<bits/stdc++.h>
using namespace std;

long long int subsequence(int *a,int k,long long int sum){
	int c=0,d=0;
	for(int i=0;a[i]!='\0';i++){
		c++;
		if(a[i]%2!=0){
			sum*=a[i];
			d++;
		}
	}
	if(c==k and d%2==0){
		return sum;
	}
	else{
		return 1;
		// sum=0;
	}
}
int main () {
	int n,k;
	cin>>n>>k;
	long long int arr[n],a[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long int sum=1,msum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			a=arr.substr(i,j-i+1);
			long long int ans=subsequence(a,k,sum);
			msum+=ans;
			
		}
	}
	cout<<(msum/1e9+7)<<endl;
	return 0;

}