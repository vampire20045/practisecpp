// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates
#include<iostream>
using namespace std;
int main(){
    int a, sum=0 ,i;
    for(i=1;i<11;i++){
        cout<<"enter a number";
        cin>>a;
        if(a<0){
            break;
        }
        sum=sum+a;}
        cout<<sum;
    return 0;

}