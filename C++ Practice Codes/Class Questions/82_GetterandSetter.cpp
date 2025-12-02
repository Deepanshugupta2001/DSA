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

    //5.Destructor
    ~Car(){
        cout<<"Destroying Object: "<<name<<endl;
    }

    //Getter
    void setPrice(int p){
        if(p>100 and p<200) price=p;
        else price=150;
    }
    //Setter

    int getPrice(){
        return price;
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
    A.seats=5;
    A.setPrice(-100);
    cout<<"Price of A: "<<A.getPrice()<<endl;
    A.print();
    return 0;
}