/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n-2;i>=1;i--){
        for(int j=1;j<=i;j++){
        cout<<"*"<<'\t';      
        
    }
    cout<<endl;
    }
    for(int i=2;i<=n-2;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<'\t';
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;

	for(int i = 1;i<=N;i++){
		cout<<"*\t";
	}
	cout<<endl;
	for(int i = 1;i<N/2;i++){
		for(int j = i;j<=N/2;j++){
			cout<<"*\t";
		}
		for(int j = 1;j<=(2*i)-1;j++){
			cout<<"\t";
		}
		for(int j = i;j<=N/2;j++){
			cout<<"*\t";
		}
		cout<<endl;
	}
	for(int i = 1;i<=1;i++){
		cout<<"*\t";
		for(int j =1;j<=N-2;j++){
			cout<<"\t";
		}
		cout<<"*\t";
	}
	cout<<endl;
	int s = N/2-1;
	for(int i = 1;i<N/2;i++){
		for(int j = 1;j<=i+1;j++){
			cout<<"*\t";
		}
		for(int j = i;j<=(2*s)-i;j++){
			cout<<"\t";
		}
		for(int j = 1;j<=i+1;j++){
			cout<<"*\t";
		}
		cout<<endl;
	}
	for(int i = 1;i<=N;i++){
		cout<<"*\t";
	}
	cout<<endl;
    return 0;
}