#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
void checkcb(string &k,vector<int> &v,int *arr,int l){
    bool milakya=false;
    int x=stoi(k);
    cout<<"String is: "<<k<<endl;
    cout<<"Number converted is: "<<x<<endl<<endl;
    for (int i = 0; i < l; i++)
    {
        if(x==arr[i]){
            milakya=false;
            break;
        }
        else if(x%arr[i]==0){
            milakya=true; 
            break;
        }
    }
    if(milakya==false and x!=1 and x!=0) {
        cout<<"Inserting "<<x<<" in vector"<<endl;
        v.push_back(x);
    }
    
}
void haikya(int *a,int n,int element){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==element) {
            n=n-1;
            for (int j = 0; j < n; j++)
            {
                a[j]=a[j+1];
            }
            
            break;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v;
    //saare substrings ko check karna hai ki voh cb number hai ya nhi
    int arr[]={2,3,5,7,11,13,17,19,23,29};
    int l=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string k=s.substr(i,j-i+1);
            checkcb(k,v,arr,l);

        }
        
    }
    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" : ";
    }

    string a[v.size()];
    for (int i = 0; i < v.size(); i++)
    {
        a[i]=v[i];
    }
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Yeh "<<i <<" times chal raha hai"<<endl;

        cout<<a[i]<<" : ";
    }
    cout<<endl;
    for (int m = 0; m < v.size(); m++)
    {
        for (int  i = 0; i !='\0'; i++)
        {
            for (int j = i; j !='\0'; j++)
            {
                for (int k = i; k <=j; k++)
                {
                    haikya(a,v.size(),a[k]);
                }
                
            }
            
        }
    }
    cout<<endl;
    cout<<"Its starting"<<endl;
    int p=sizeof(a)/sizeof(int);
    for (int i = 0; i < p; i++)
    {
        cout<<"Yeh "<<i <<" times chal raha hai"<<endl;
        cout<<a[i]<<" : ";
    }
    cout<<endl;
    return 0;
    
}