// value of nth term is eqauls to the sum of previous terms 

#include<iostream>
using namespace std;
int fin(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1) 
    {
        return 1;

    }
    return fin(n-1)+fin(n-2);
    
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<"the result is "<<fin(n);
    return 0;
}


