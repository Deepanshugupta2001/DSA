#include<iostream>
#include<cstring>
using namespace std;
/////////////////////BLUEPRINT////////////////////////
class Car{
    public:
        char name[100];
        int price;
        int model;
        int seats;
};
/////////////////////BLUEPRINT////////////////////////

int main(){
    Car A;
    strcpy(A.name,"BMW");
    A.model=2022;
    A.price=200;
    A.seats=5;

    cout<<"Name      :"<<A.name<<endl;
    cout<<"Model     :"<<A.model<<endl;
    cout<<"Seats     :"<<A.seats<<endl;
    cout<<"Price     :"<<A.price<<endl;

    Car B;
    strcpy(B.name,"PORSCHE");
    B.model=2023;
    B.price=300;
    B.seats=5;

    cout<<"Name      :"<<B.name<<endl;
    cout<<"Model     :"<<B.model<<endl;
    cout<<"Seats     :"<<B.seats<<endl;
    cout<<"Price     :"<<B.price<<endl;

    return 0;
}