#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(long long int n){
	long long int a,b=0,sum=0,n1=0;
    b=n;
	while (n!=0)
    {
		n/=10;
       	n1 ++;
	}
    n=b;
	while (n!=0)
    {
		a=n%10;
		n/=10;
        sum+=(int)pow(a,n1);
	}
    
	if(sum==b){
		return true;
	}
	else{
		return false;
	}
}
int main() {

	long long int n,n1;
	cin>>n;

    if(armstrong(n)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
	
	return 0;
}