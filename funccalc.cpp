// function prototype 
// type funtion name(arguments)

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void greet(){
    cout<<"hello welcome to the world of aryan";
}
int add(int a,int b){
    int sum=a+b;
    cout<<"the sum is"<<sum;

}
int diff(int a,int b){
    int diff=a-b;
    cout<<"the difference is "<<diff;

}
int multi(int a , int b){
    int multi=a*b;
    cout<<"the multiplication is"<<multi;


}
int divide(int a , int b){
    int div=a/b;
    cout<<"the division is"<<div;

}
int main(){
    greet();
    int a,b,i;
    cout<<"enter the number";
    cin>>a>>b;
    cout<<"enter the choice";
    cin>>i;
    if(i==1){
        add(a,b);

    }
    else if(i==2){
        diff(a,b);
    }
    else if(i==3){
        multi(a,b);
    }
    else if(i==4){
        divide(a,b);

    }
    else{
        cout<<"enter the valid choice";
    }
    return 0;
}