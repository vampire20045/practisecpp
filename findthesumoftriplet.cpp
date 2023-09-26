#include<iostream>
using namespace std;
int main()
{
int k=0,arr[9],a;
cout<<"enter the number";
cin>>a;
cout<<"enter the elements in arrays";
for(int i=0;i<9;i++){
cin>>arr[i];
}
int size=9;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int z=j+1;z<size;z++){
            if(arr[i]+arr[j]+arr[z]==a)
            {
              k=k+1;
            }
        }
    }
}
cout<<"the number of pairs are:"<<k;
}