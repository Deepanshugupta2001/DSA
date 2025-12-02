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
        const int tyres;
        static int count;

    //Functions
    //1.Default Constructor
    Car():tyres(5){
        cout<<"Inside Default Constructor"<<endl;
        name=NULL;
        count++;
    }
    //2.Parameterized Constructor
    Car(char *name,int price,int model,int seats):tyres(5){
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->price=price;
        this->model=model;
        this->seats=seats;
        cout<<"Inside Parameterized Constructor"<<endl;
        count++;

    }

    //3.Copy Constructor
    Car(const Car &X):tyres(5){
        cout<<"Inside Copy Constructor"<<endl;
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        seats=X.seats;
        model=X.model;
        count++;

    }

    //print 
    void print(){
        cout<<"Name      :"<<name<<endl;
        cout<<"Model     :"<<model<<endl;
        cout<<"Seats     :"<<seats<<endl;
        cout<<"Tyres     :"<<tyres<<endl;
        cout<<"Price     :"<<price<<endl<<endl;
    }
    void setName(char*a){
        if(name!=NULL) delete[] name;
        name=new char[strlen(a)+1];
        strcpy(name,a);
    }

    //5.Destructor
    ~Car(){
        count--;
    }
};
/////////////////////BLUEPRINT////////////////////////
int Car::count=0;
int main(){
    Car A;
    // strcpy(A.name,"BMW");
    char name[]="BMW";
    A.setName(name);
    A.model=2022;
    A.price=200;
    A.seats=5;

    char nam[]="PORSCHE";
    Car B(nam,300,2023,5);

    Car C=A;

    A.print();
    B.print();
    C.print();

    cout<<"Total Cars: "<<Car::count<<endl;
    cout<<"Total Cars: "<<A.count<<endl;   
    
    return 0;
}