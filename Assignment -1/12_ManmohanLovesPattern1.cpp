#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
				cout<<"1";
				for(int k=2;k<i;k++){
					cout<<"0";
				}
				cout<<"1";
				break;
			}
			else{
				cout<<"1";
			}
		}
		cout<<endl;
	}

    return 0;
    
}