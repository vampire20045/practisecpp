#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a;
cout<<"enter the element ";
cin>>a;
vector <int> v;
for(int i=0;i<6;i++){
    int x;
    cin>>x;
    v.push_back(x);


}
int s;
for(int i=0;i<v.size();i++)
{
 if(v[i]==a)
 {
    s=i;
 }
}
cout<<"last occurence of the element"<<s;
return 0;

}