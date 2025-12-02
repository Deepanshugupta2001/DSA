#include<iostream>
using namespace std;
void toh(int n,char src,char helper,char des){
    //base case
    if(n==0) return;
    //N-1 disks ko src to helper lee jao
    toh(n-1,src,des,helper);
    //Ek disk ko manually move kar from src to des
    cout<<n<<"->"<<src<<" to "<<des<<endl;
    //N-1 disks ko helper se des pa le jao
    toh(n-1,helper,src,des);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}