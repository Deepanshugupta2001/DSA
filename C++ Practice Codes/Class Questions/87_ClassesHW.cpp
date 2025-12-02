#include<iostream>
#include<cstring>
using namespace std;
class Student{
    private:
        int marks;
    public:
        char *name;
        int rollNumber;
    //Functions:-
    //1.Default Constructor:
    Student(){
        cout<<"Inside Default Constructor"<<endl;
    }
    //2.Parameterized Constructor
    Student(char *name,int marks,int rollNumber){
        cout<<"Inside Parameterized Constructor"<<endl;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->marks=marks;
        this->rollNumber=rollNumber;
    }

    //3.Copy Constructor
    Student(Student &S){
        cout<<"Inside Copy Constructor"<<endl;
        name=new char[strlen(S.name)+1];
        strcpy(name,S.name);
        marks=S.marks;
        rollNumber=S.rollNumber;
    }
    //4.Copy Assignment Operator
    void operator=(Student &S){
        cout<<"Inside Copy Assignment Constructor"<<endl;
        if(name!=NULL) delete[] name;
        name=new char[strlen(S.name)+1];
        strcpy(name,S.name);
        marks=S.marks;
        rollNumber=S.rollNumber;

    }
    void setMarks(int m){
        marks=m;
    }

    int getMarks(){
        return marks;
    }
    bool operator>(Student &S){
        return marks>S.marks;
    }
    ~Student(){
        cout<<"Deleting: "<<name<<endl;
        delete[] name;
    }

    void print(){
        cout<<"Name       : "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks      : "<<marks<<endl<<endl;

    }
    void setName(char *a){
        if(name!=NULL) delete[] name;
        name=new char[strlen(a)+1];
        strcpy(name,a);
    }
};
int main(){
    Student A;
    char name[]="Rohit";
    A.setName(name);
    A.setMarks(45);
    A.rollNumber=21;
    
    char b[]="Deepanshu";
    Student B( b, B.getMarks(),47);
    B.setMarks(95);

    Student C=A;
    C.print();
    C.rollNumber=B.rollNumber;
    if(B>C){
        cout<<B.name<<" marks is more than "<<C.name<<endl;
    }
    else{
        cout<<C.name<<" marks is more than "<<B.name<<endl;
    }

    A.print();
    B.print();
    C.print();

    return 0;
}