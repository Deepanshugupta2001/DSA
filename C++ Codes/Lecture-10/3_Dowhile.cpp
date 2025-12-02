#include<iostream>
using namespace std;
int main()
{
    int i=1;    //Initialisation
    do{
        cout<<i<<"  ";
        i++;    //Updation
    }while(i<10);    //Condition Check also while(i>10); code will run only once i.e. for i=1
    return 0;
}