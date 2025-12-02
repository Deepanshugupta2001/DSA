#include<iostream>
#include<cstring>
using namespace std;
/////////////////////BLUEPRINT////////////////////////
class Car{
    private:
        int price;

    public:
        char name[100];
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
        cout<<"Inside Copy Constructor"<<endl;
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
    }

    //4.Copy Assignment Operator
    void operator=(Car X){
        cout<<"Inside Copy Assignment Operator"<<endl;
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;

    }

    //5.Destructor
    ~Car(){
        cout<<"Destroying Object: "<<name<<endl;
    }

    //Operator Overloading
    bool operator>(Car& X){
        return price>X.price;
    }

    //print 
    void print(){
        cout<<"Name      :"<<name<<endl;
        cout<<"Model     :"<<model<<endl;
        cout<<"Seats     :"<<seats<<endl;
        cout<<"Price     :"<<price<<endl<<endl;
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
    cout<<"Name      :"<<C.name<<endl;
    cout<<"Model     :"<<C.model<<endl;
    cout<<"Seats     :"<<C.seats<<endl;
    cout<<"Price     :"<<C.price<<endl;

    C=B;

    if(C>A){
        cout<<"C is expensive\n";
    }

    else{
        cout<<"A is expensive\n";
    }

    A.print();
    B.print();
    C.print();
    
    return 0;
}