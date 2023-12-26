#include<iostream>
using namespace std;
class fru{
    public:
    string name;
    string color;
};
int main(){
    fru* mango=new fru();
mango->name="mm";
mango->color="red";
cout<<mango->color;
}