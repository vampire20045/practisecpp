//increment  and decrement here pointer value refers to shift in memory location that pointer is pointly
//ptr+2= ptr+2*size of datatype
#include<iostream>
using namespace std;
int main(){
   // int a;
    //cin>>a;
    //int *ptr=&a;
    //cout<<ptr<<(ptr+2);
    //cout<<(ptr-2);
    int arr[2]={6,7};
    int *pt=&arr[0];
    cout<<*pt<<*(++pt)<<*pt++;
    
} 