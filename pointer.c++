#include<iostream>
using namespace std;
int main(){
    //what is pointer data type which hold the address of the otherdata type 
    int a=3;
    int*b=&a;
    //&=address of operator 
    //*=defrenece operator 
    cout<<b;
    // the value at adress b is 
    cout<<*b;
    // pointer to pointer 
    int*c=&b;
    return 0;


    
}