#include<iostream>
using namespace std;
void printSeries(int n1,int n2){
    bool series;
    int i;
    for( i=1;i<=n1+3;i++){
        series=true;
        if((3*i+2)%n2==0){
            series=false;
        }
        else{
            series=true;
        }
        if(series==true){
        cout<<(3*i+2)<<endl;
    }
        
    }

    

    
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    printSeries(n1,n2);
}