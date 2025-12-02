#include<iostream>
#include<vector>
using namespace std;
class Point{
    public:
        int x;
        int y;
        Point(int x,int y){
            this->x=x;
            this->y=y;
        }
};
int main(){
    vector<Point> points={
        Point(1,2),
        Point(2,0),
        Point(2,2),
        Point(2,3),
        Point(4,2),
    };
    int cnt=0;
    for(Point p: points){

        int a=0;
        int b=0;
        for(Point pp: points){
            if(pp.x==p.x) a++;
            if(pp.y==p.y) b++;
        }
        a--;
        b--;
        cnt+=a*b;
    }
    cout<<cnt<<endl;
    return 0;
}