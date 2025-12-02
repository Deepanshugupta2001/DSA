#include<iostream>
using namespace std;
void toh(int n,char src,char helper,char des){
    if(n==0) return ;

    //1.N-1 disks ko src to helper par lekar jaana
    toh(n-1,src,des,helper);
    //2. Nth disk ko src to des lekar jaana
    cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des<<endl;
    //3. N-1 disks ko helper to des lekar jaana
    toh(n-1,helper,src,des);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','C','B');
}
