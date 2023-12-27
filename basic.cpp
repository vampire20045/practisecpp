#include<iostream>
using namespace std;
class node{
    public:
int val;
node *next;
node(int n){
    this->val=n;
   this-> next=NULL;

}

};
int main(){
    node *n=new node(1);
    cout<<n->val<<" "<<n->next<<endl;

}