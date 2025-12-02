#include<iostream>
#include<stack>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void Allprimes(int n,int *arr){
	int count=0;
	int no=2;
	while(count<n){
		if(isPrime(no)){
			arr[count]=no;
			count++;
			no++;
		}
		else{
			no++;
		}
	}
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    stack<int> s,b,a;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin>>d;
        s.push(d);

    }
    int arr[n];
    Allprimes(k,arr);
    for (int p = 1; p <=k; p++)
    {   if(a.empty()==true){ 
        while(!s.empty()){
		    if(s.top() % arr[k-1]==0){
				// cout<<arr[k-1]<<endl;
                b.push(s.top());
                s.pop();
            }
            else{
                a.push(s.top());
                s.pop();
            }
        }
        }
        else if(s.empty()==true){
            while(!a.empty()){
                if(a.top() % arr[k-1]==0){
                    // cout<<arr[k-1]<<endl;
                    b.push(a.top());
                    a.pop();
                }
                else{
                    s.push(a.top());
                    a.pop();
                }
            }
        }
    }

    while(!b.empty()){
        cout<<b.top()<<endl;
        b.pop();
    }
    if(s.empty()==true){
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
    }
    else if(a.empty()){
        while(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
        }
    }
    return 0;
}