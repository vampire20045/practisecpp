#include<iostream>
using namespace std;
class sum{
    private:
    int x;
    int y;
    public:
    int get(int x,int y){
    x=x;
    y=y;}
    int set(int x,int y){
        cout<<x+y;
    }
};


int main(){
sum s;
s.get(2,4);
s.set(2,4);
}