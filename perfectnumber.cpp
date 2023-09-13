#include<iostream>
using namespace std;
void perfect(int n){
    int c=0;
    for(int i=1;i<n;i++)
    {
       if(n%i==0)
       {
        c=c+i;
       }

    }
    if(c==n)
    {
        cout<<"True the number is perfect";

    }
    else
    {
        cout<<"False the number is not perfect";
    }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    perfect(n);
    return 0;
    

}