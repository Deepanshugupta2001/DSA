#include<iostream>
using namespace std;
//CREATING MACROS
#define PI 3.14+1
//#define PI (3.14+1)
#define START int main(){
#define END return 0;}
#define PRINT cout<<
#define y 4-1
START

    //PI=44.4   WILL NOT RUN,SHOW ERROR
    PRINT PI<<endl;
    PRINT 2*PI*1<<endl;
    int r=1;
    PRINT 2*PI*r<<endl;
    PRINT 2*y<<endl;
END