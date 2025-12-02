#include<iostream>
#include<cmath>
using namespace std;
int mod = 1e9 + 7;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    while (k--)
    {
        int x; cin >> x;
        int temp[n] = {0};
        for(int i = 0; i < n; i++){
            temp[i] = a[i] + a[(i+n-x)%n];
        }
        for(int i = 0; i < n; i++){
            a[i] = temp[i];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
    
}