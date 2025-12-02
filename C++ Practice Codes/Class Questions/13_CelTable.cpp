#include<iostream>
using namespace std;
void celsius(int init_f,int final_f,int step){
    int cel;
    for (int init_f = 0; init_f <= final_f; init_f+=step)
    {
        cel=(5.0/9)*(init_f-32);
        cout<<init_f<<" "<<cel<<endl;
    }
    
    
}
int main(){
    int init_f,final_f,step;
    cin>>init_f>>final_f>>step;
    celsius(init_f,final_f,step);
    return 0;
    
}