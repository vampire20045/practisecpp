// structure is used to store different datatypes
//typedef is used to give shoter name 
#include<iostream>
using namespace std;
typedef struct student{
    int id;
    char name;
    float salary;

}ep;
int main(){
    ep  aryan;
    cout<<"enter id";
    cin>>aryan.id;
    cout<<"name";
    cin>>aryan.name;
    cin>>aryan.salary;
    cout<<aryan.name;
    return 0;
}