#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    string colour;

};
int main(){
    fruit apple;
    apple.name="apple";
    apple.colour="red";
cout<<apple.name;
// object pointer
fruit *mango=new fruit();
mango->name="mango";
mango->colour="yellow";

}