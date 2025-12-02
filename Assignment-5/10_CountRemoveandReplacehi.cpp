#include<iostream>
using namespace std;
int ctr=0;
void count(string a,string &s,string &y,int i,int j){
    //base case
    if(a[i]=='\0'){
        cout<<ctr<<endl;

        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        for (int k = 0; k < y.size(); k++)
        {
            cout<<y[k];
        }
        cout<<endl;
           
        return ;
    }

    //recursive case
    //ek baar hi ko hum count karlete hai baaki time fir recursion karega
    if(a[j]!='\0' and a[i]=='h' and i<a.size()-1){
		if(a[j]=='i'){
            ctr++;
            y=y+"bye";
            // y=y+'y';
            // y=y+'e';
            count(a,s,y,i+2,j+2);
        }
    	else if(a[j]!='i'){
        s=s+a[i];
        y=y+a[i];
        count(a,s,y,i+1,j+1);
    }
	}
	else {
		s=s+a[i];
        y=y+a[i];
        count(a,s,y,i+1,j+1);
	}
}
int main(){
    string a,s,y;
    cin>>a;
    int i=0,j=i+1;
    count(a,s,y,i,j);
    return 0;
}