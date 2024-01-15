
#include<iostream>
using namespace std;
class node{
public:
int data;
node*next=NULL;
node(int d){
    this->data=d;
    this->next=NULL;
}
};
void insert(int *&tail, int d){
    node* temp=new node(d);
tail->next=temp;
tail=tail->next;


}
void print(int *&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;


    }
}
int main(){
    node *n=new node(NULL);
    node *tail=n;
    node *head=n;
    node(tail,12);
    print(head);
    
}