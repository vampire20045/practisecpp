// vectors are dynamic arrays where we can insert and delete the array 
// contigeous memory allacotion
// operations on vector 
//1. name.size()
//2. name.resize()
//3.name.capacity()
//4.name.push_back(element)
//5.name.insert(position,element)
//6.name.begin()
//7.name.end()
//8. name.pop_back()
//9.name.erase(position)
//10 name.clear()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> num(10);
cout<<num.size()<<endl;

cout<<"enter the elements in a vector";
for(int i=0;i<10;i++)
{
 int n;
 cin>>n;
 num.push_back(n);
}
// to show the elements in a vector
for(int i=0;i<10;i++)
{
cout<<num[i];
}
return  0;


}
