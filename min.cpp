#include<iostream>
using namespace std;
// code to find the min number in a array
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements for an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];


    }
    cout<<"elements in a array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;


    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"minimum number in array is:"<<min;
    return 0;
    }