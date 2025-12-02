#include<iostream>
using namespace std;
void toh(int n,char src,char helper,char des)
{
    if(n==0) return;
    // 1.N-1 disks ko src to helper le jaao
    toh(n-1,src,des,helper);
    // 2.Nth disk ko src to des leke jao
    cout<<n<<"->"<<src<<" to "<<des<<endl;
    // 3. N-1 disks ko helper se des par le jaao
    toh(n-1,helper,src,des);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}