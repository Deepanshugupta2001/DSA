#include<iostream>
#include<cstring>
using namespace std;
void replace(string &s,string x,int i){
  
    if(s[i]=='\0'){
    for (int j = 0; j < x.size(); j++)
        {
            cout<<x[j];
        }
    cout<<endl;
    return;
    }

    if(s[i]!='p'){
            x=x+s[i];
			replace(s,x,i+1);

    }
    if(s[i]=='p' and i<s.size()-1){
	 if(s[i+1]=='i') {
        
            x=x+"3.14";
            replace(s,x,i+2);
        }
    else {
            x=x+s[i];
            replace(s,x,i+1);
        }
	}
    

}
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
    string s,x;
    cin>>s;
    // x="";
    replace(s,x,0);
    }
    return 0;
}