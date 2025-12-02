#include<iostream>
using namespace std;
int main() {

	int N;
	cin>>N;
	bool KyaPrimeHaiN;
	for(int i=2;i<N;i++){
		KyaPrimeHaiN=true;
		if(N % i ==0){
			KyaPrimeHaiN=false;
		}

		else{
			KyaPrimeHaiN=true;
		}

		if(KyaPrimeHaiN==true){
			cout<<N<<endl;
		}
	}
	return 0;
}