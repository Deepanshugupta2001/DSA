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

    //Functions
    //1.Default Constructor
    Car(){
        cout<<"Inside Default Constructor"<<endl;
    }
    //2.Parameterized Constructor
    Car(char *a,int p,int m,int s){
        strcpy(name,a);
        price=p;
        model=m;
        seats=s;
        cout<<"Inside Parameterized Constructor"<<endl;
    }

    //3.Copy Constructor
    Car(Car &X){
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
    }

    //print 
    void print(){
        cout<<"Name      :"<<name<<endl;
        cout<<"Model     :"<<model<<endl;
        cout<<"Seats     :"<<seats<<endl;
        cout<<"Price     :"<<price<<endl;
    }
};
/////////////////////BLUEPRINT////////////////////////
int main(){
    Car A;
    strcpy(A.name,"BMW");
    A.model=2022;
    A.price=200;
    A.seats=5;

    // cout<<"Name      :"<<A.name<<endl;
    // cout<<"Model     :"<<A.model<<endl;
    // cout<<"Seats     :"<<A.seats<<endl;
    // cout<<"Price     :"<<A.price<<endl;

    char name[]="PORSCHE";
    Car B(name,300,2023,5);

    Car C=A;

    A.print();
    B.print();
    C.print();
    
    return 0;
}