#include<iostream>
#include<vector>
#include<map>
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

    map<int,int> xfreqmap;
    map<int,int> yfreqmap;
    for(Point p:points){
        xfreqmap[p.x]++;
        yfreqmap[p.y]++;
    }
    int cnt=0;
    for(Point p: points){

        int a=xfreqmap[p.x];
        int b=yfreqmap[p.y];
        
        a--;
        b--;
        cnt+=a*b;
    }
    cout<<cnt<<endl;
    return 0;
}