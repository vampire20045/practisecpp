#include<iostream>
using namespace std;
class r{
    public:
    int add(int x,int y){
        cout<<x+y<<endl;
    }
    int add(int x,int y,int z){
        cout<<x+y+z<<endl;
    }

};
int main(){
    r a;
    a.add(2,3);
    a.add(3,4,5);

}