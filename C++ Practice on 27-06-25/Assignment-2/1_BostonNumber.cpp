#include<iostream>
#include<vector>
using namespace std;
int sumnikalo(int n){
    int a=0;
    while(n){
        a+=n%10;
        n=n/10;
    }
    return a;
}

void primenikalo(vector<int> &arr,int n){
    int k=0;
    for (int i = 2; i <n; i++)
    {
        bool haikya=true;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0){
                haikya=false;
                break;
            }
        }
        if(haikya){
            arr.push_back(i);
            // k++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int k=0;
    vector<int> arr;
    int sum=sumnikalo(n);
    primenikalo(arr,n);
    // int j=sizeof(arr)/sizeof(int);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
        int i=0;
    
    while(n!=1){
        cout<<"Hum yaha"<<endl;
        if(arr[i]<=n and n%arr[i]==0) {
            cout<<arr[i]<<endl;
            k+=arr[i];
            cout<<"H: "<<n<<endl;
            n/=arr[i];
            i=0;
            cout<<"k:"<<k<<"l:"<<n<<endl;
        }
        else i++;
    }   
    if(sum==k) cout<<"1"<<endl;
    else cout<<"0"<<endl;
    return 0; 
}