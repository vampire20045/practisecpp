#include<iostream>
using namespace std;
class aryan{
    public:
    aryan(){
    cout<<"first inheritance";
}};
class ar: public aryan{
    public:
    ar(){
    cout<<"second level";}};
int main(){
    ar a;
    
}