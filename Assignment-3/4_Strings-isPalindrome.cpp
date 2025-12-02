#include<iostream>
#include<cstring>
using namespace std;
int ctr=0;
void isPalindrome(string &s){
	bool palindrome=true;
	int i=0,j=s.size()-1;
	// cout<<j<<endl;
	while(i<j){
		if(s[i]!=s[j]){
			palindrome=false;
			break;
	}
	i++;
	j--;
	}

	if(palindrome) ctr++;
}

int main() {
	
	string s,y;
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			y=s.substr(i,j-i+1);
			isPalindrome(y);
		}
		
	}
	cout<<ctr<<endl;	

	return 0;
}