#include<iostream>
using namespace std;
// code to add even the elements in a list

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
    int sum=0;
    for(int i=0;i<n;i++){
        int x=arr[i];
        if(x%2==0)
        {sum =sum+x;}

    }
    cout<<"the sum of even number is : "<<sum;
    return 0;

}