#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	cout<<s[0];
	for(int i=1;i<s.size();i++){
		if(int(s[i])>=65 && int(s[i])<=90){
			cout<<endl;
			cout<<s[i];
		}
		else cout<<s[i];
	}
	return 0;
}