//arr=name of array =address of 0th index
#include<iostream>
using namespace std;
int main(){
    int arr[19];
    for(int i=0;i<19;i++){
        cin>>arr[i];
    }
    for(int i=0;i<19;i++ ){
        cout<<*(arr+i);
    }
}