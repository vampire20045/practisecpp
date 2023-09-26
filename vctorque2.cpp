// find the difference between the sum of odd index elements and even elements 
#include<iostream>

#include<vector>
using namespace  std;
int odd(int x, vector <int> vect)
{
    int sum=0,i;
for(i=0;i<x;i++)
{
if(i%2 !=0){
    int y=vect[i];
    sum=sum+y;
}
}
return sum;

}
int even(int x,vector <int> vect)
{
    int i,sum=0;
for(i=0;i<x;i++)
{
if(i%2 ==0){
    int y=vect[i];
    sum=sum+y;
}
}
return sum;

}
int main()
{
    vector <int> vect;
    int x;
    cout<<"enter the sixe of array";
    cin>>x;
    cout<<"enter the elements in array";
    for(int i=0;i<x+1;i++)
    {
        int y;
        cin>>y;
        vect.push_back(y);

    }
    int l=odd(x,vect);
int m=even(x,vect);
int sum=l-m;
cout<<"the differnce between the elements"<<sum;
return 0;

}