#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum=0, num,l;
    cout<<"enter a number";
    cin>>num;
    while(num>0){
        l=num%10;
        sum=sum+pow(l,3);
        num=num/10;
    }
    if(sum==num){
        cout<<"arms";
        else{
            cout<<"not";
        }
    }
    return 0;

}