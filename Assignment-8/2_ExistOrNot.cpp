// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         int q;
//         cin>>q;
//         while(q--){
//             int key;
//             cin>>key;
//             bool milakya=false;
//             for (int i = 0; i < n; i++)
//             {
//                 if(a[i]==key){
//                     milakya=true;
//                     break;
//                 }
//             }
//             if(milakya) cout<<"Yes"<<endl;
//             else cout<<"No"<<endl;
//         }
        
//     }
//     return 0;
// }

// Another method using heap to improve tc:-

#include <iostream>
#include <queue>
// #include <functional>
using namespace std;
bool printHeap(priority_queue<int> h,int k){
    bool milakya=false;
    while(!h.empty()){
        // cout<<h.top()<<" ";
        if(h.top()==k){
            milakya=true;
            break;
        }
        h.pop();
    }
    // cout<<endl;
    return milakya;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        priority_queue<int> h; 
	    int d;
	    cin>>d;
    	while (d--) {
		    int n;
		    cin >> n;
		
		    h.push(n);
		
	    }
        int q;
        cin>>q;
        while(q--){
            int k;
            cin>>k;
            bool mila=printHeap(h,k);
            if(mila) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
	// while(!h.empty()){
	// 	if(ctr==k){
	// 		cout<<h.top()<<endl;
	// 	}
	// 	h.pop();
	// 	ctr++;
	// }

	return 0;
}