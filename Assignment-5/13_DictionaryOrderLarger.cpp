#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(string &x,string &y){
    return x<y;
}
vector<string> v;
void permutations(string &a,string b,int i,int k){
    //base case
    if(a[i]=='\0'){
            if(cmp(b,a)){
			v.push_back(a);
			}
            return;
        }

    //recursive case
    for (int j = i; a[j] !='\0'; j++)
    {
        swap(a[i],a[j]);
        permutations(a,b,i+1,0);
        swap(a[i],a[j]);
    }
}

int main(){
    string a,b;
    cin>>a;
    b=a;
    permutations(a,b,0,0);
	sort(v.begin(),v.end());
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
    return 0;
}