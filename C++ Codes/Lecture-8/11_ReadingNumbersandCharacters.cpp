#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    char ch;

    //initialisation
    ch=cin.get();    //Bahar ch ka input is important because while loop ka andar hum ch!='$' tabhi kr sakte hai jab ch me garbage na ho
    while(ch!='$'){//Condition Check
        cnt++;
        if(ch=='\n'){
            cout<<"User Entered enter \n";
        }
        else if(ch==' '){
            cout<<"User Entered Space \n";
        }
        else if(ch=='\t'){
            cout<<"User Entered tab \n";
        }
        else{
            cout<<"User entered : "<<ch<<endl;
        }
        ch=cin.get();      //Updation

    }
    //ch=cin.get(); will not ignore whitespace characters('\t','\n',' '),it means inhe ch ki bucket ka andar daalega
    cout<<"Total characters: "<<cnt<<endl;
    return 0;
}