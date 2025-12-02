#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    char ch;

    //Initialisation of ch
    cin>>ch;//Bahar  ch ka input is important because while loop ka andar hum 'ch!=$' tabhi kar sakte hai jab ch mei garbage na ho
    while(ch!='$'){      // Condition Check
        cnt++;

        cin>>ch;     //Updation
          
    }
    //cin ignores whitespaces characters
    cout<<"Total characters: "<<cnt<<endl;
    return 0;
}