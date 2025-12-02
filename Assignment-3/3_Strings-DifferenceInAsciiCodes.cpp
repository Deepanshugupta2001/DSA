#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		int num=0;
		if(s[i+1]!='\0'){
		num=s[i+1]-s[i];
		cout<<s[i]<<num;
		}
		else cout<<s[i];
	}
	return 0;
}