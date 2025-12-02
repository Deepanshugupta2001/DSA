#include<iostream>
#include<cstring>
using namespace std;
/////////////////////BLUEPRINT////////////////////////
class Car{
    public:
        char *name;
        int price;
        int model;
        int seats;

    //Functions
    //1.Default Constructor
    Car(){
        cout<<"Inside Default Constructor"<<endl;
        name=NULL;
    }
    //2.Parameterized Constructor
    Car(char *a,int p,int m,int s){
        name=new char[strlen(a)+1];
        strcpy(name,a);
        price=p;
        model=m;
        seats=s;
        cout<<"Inside Parameterized Constructor"<<endl;
    }

    //3.Copy Constructor
    Car(Car &X){
        cout<<"Inside Copy Constructor"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
    }

    //4.Copy Assignment Operator
    void operator=(Car X){
        cout<<"Inside Copy Assignment Operator"<<endl;
        if(name!=NULL) delete[] name;
        name=new char[strlen(X.name)+1];
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
        cout<<"Price     :"<<price<<endl<<endl;
    }
    void setName(char*a){
        if(name!=NULL) delete[] name;
        name=new char[strlen(a)+1];
        strcpy(name,a);
    }

    //5.Destructor
    ~Car(){
        cout<<"Deleting: "<<name<<endl;
        delete[] name;
    }
};
/////////////////////BLUEPRINT////////////////////////
int main(){
    Car A;
    // strcpy(A.name,"BMW");
    A.setName("BMW");
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

    B.name[0]='T' ;
    A.print();
    B.print();
    C.print();
    
    return 0;
}