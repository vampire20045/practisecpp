// unions is like structure but difference is it takes only one dataype at one time and it also used to optimize the memory
// structure is used to store different datatypes
#include<iostream>
using namespace std;
union  student{
    int id;
    char name;
    float salary;

};
int main(){
    union student aryan;
    cout<<"enter id";
    cin>>aryan.id;
    cout<<"name";
    cin>>aryan.name;
    cin>>aryan.salary;
    cout<<aryan.name;
    return 0;
}