// structure is used to store different datatypes
#include<iostream>
using namespace std;
struct student{
    int id;
    char name;
    float salary;

};
int main(){
    struct student aryan;
    cout<<"enter id";
    cin>>aryan.id;
    cout<<"name";
    cin>>aryan.name;
    cin>>aryan.salary;
    cout<<aryan.name;
    return 0;
}