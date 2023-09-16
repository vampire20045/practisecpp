#include<iostream>
using namespace std;
// code to find the max number in a array
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
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"maximum number in array is:"<<max;
    return 0;
    }