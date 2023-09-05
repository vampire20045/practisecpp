#include<iostream>
#include<string>
using namespace std;
typedef struct student{
    int arr[10];
    float salary;
    string name;
}ep;
int main(){
    ep aryan;
    int i ,n;

    cout<<"enter the name";
    cin>>aryan.name;
    cout<<"enter the elements";
    for(i=1;i<10;i++){
        cin>>aryan.arr[i];

    }
    for(n=1;n<10;n++){
        cout<<aryan.arr[n];
    }
    
    return 0;
}