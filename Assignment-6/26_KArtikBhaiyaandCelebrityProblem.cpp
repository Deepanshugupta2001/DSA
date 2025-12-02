#include<iostream>
#include<stack>

using namespace std;
stack<int> s;
int n;
int arr[100][100];
int findcelebrity(){
    while(s.size()>1){
        int a=s.top();
        s.pop();

        int b=s.top();
        s.pop();

        if(arr[a][b]){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int ans=s.top();
    return ans;
}

int optimisedcelebrity(){
    int i=0,j=n-1;

    while(i<j){
        if(arr[i][j]){ // i knows j,therfore not a celeb
            i++;
        }
        else{
            j--;
        }
    }
    return i;
}
int main(){
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        s.push(i); //insert every element inside stack
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int celebrity=findcelebrity();
    int celeb=optimisedcelebrity();

    return 0;
    

}