# include<iostream>
using namespace std;
int main(){
    int a,i;
    cout <<"enter a number ";
    cin>>a;
    bool flag=0;
    for(i=2;i<a;i++){
        if (a%i==0){
        cout<<"not ";
        flag=1;

            break;
           }
        
    }
    if (flag==0){
        cout<<"prime number";
    }
    return 0;
}