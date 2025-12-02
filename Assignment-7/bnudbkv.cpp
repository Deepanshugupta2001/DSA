#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        vector<int> arr(n, 0);
        for(int i=0; i<n; i++) cin >> arr[i];

        int maxi = *max_element(arr.begin(), arr.end()), mini = *min_element(arr.begin(), arr.end());


        cout << maxi - mini << endl;
    }

    return 0;
}