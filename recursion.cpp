#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    int fac=n * fact(n-1);
    return fac;
}
int main()
{
   int n;
   cout<<"enter a number";
   cin>>n;
   cout<<"the facotrial of the number is"<<fact(n);
return 0;
}