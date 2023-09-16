
#include<iostream>
using namespace std;
int main(){
    int x=30; float y=3.4;char b='b';
    int *ptr=&x;float *u=&y;char *p=&b;
    cout<<ptr<<u<<p<<endl;
    cout<<*ptr<<*u<<*p;
    return 0;}