#include<iostream>
using namespace std;
class fruit{
    public:
    string color;
    string name;
fruit(){// default constru
    color="pink";
    name="mango";

}
fruit(string c,string n){// parameter construc
    color=c;
    name=n;
}
fruit(fruit &f){// copy constructor
    color=f.color;
    name=f.name;

}
};
int main(){
    fruit mango;
    cout<<mango.color<<mango.name;
    fruit grape("green","grapes");
    cout<<grape.color<<grape.name;
    fruit orange=grape;
    cout<<orange.color<<orange.name;



}