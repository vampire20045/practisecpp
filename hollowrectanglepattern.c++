#include<iostream>
using namespace std;
int main(){
    int x,y,i,j;
    cout<<"enter the row and column";
    cin>>x>>y;
    for (i=1;i<x;i++){
        for(j=1;j<y;j++){
            if(i==1 || i==x){
                cout<<"*";
            }
            else if(j==1 || j==y){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
    
}