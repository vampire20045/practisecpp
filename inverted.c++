#include <iostream>
using namespace std;
int main(){
    int i,j,k,l;
    cout<<"enter the row and column";
    cin>>i>>j;
    for(k<=i;k=1;k--){
        for(l=1;l<=j;l++){
            cout<<"*";

        }
        cout<<endl;  
    }
    return  0;
}