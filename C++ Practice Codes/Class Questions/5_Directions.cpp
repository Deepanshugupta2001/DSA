#include<iostream>
using namespace std;
int main(){
    char ch;
    int x=0,y=0;
    ch=cin.get();
    while(ch=='\n'){
    if(ch=='N') y++;
    else if(ch=='S') y--;
    else if(ch=='E') x++;
    else x--;
    ch=cin.get();
    }
    if(x>=0 && y>=0){
        for(int i=0;i<x;i++){
            cout<<'E';
        }
        for(int j=0;j<y;j++){
            cout<<'N';
        }
    }
    else if(x<=0 && y>=0){
        for(int j=0;j<y;j++){
            cout<<'N';
        }
        x=x*(-1);
        for(int i=0;i<x;i++){
            cout<<'W';
        }
    }
    else if(x<=0 && y<=0){
        x=x*(-1);
        y=y*(-1);
        for(int i=0;i<x;i++){
            cout<<'W';
        }
        for(int j=0;j<y;j++){
            cout<<'S';
        }
    }
    else{
        y=y*(-1);
        for(int i=0;i<x;i++){
            cout<<'E';
        }
        for(int j=0;j<y;j++){
            cout<<'S';
        }
    }

    return  0;

}