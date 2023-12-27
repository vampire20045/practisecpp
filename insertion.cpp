#include<iostream>
using namespace std;
 class node{
    public:
    int val;
    node*next;
    node(int n){
        this->val=n;
        this->next=NULL;
    }};
void insert(node *&head,int d){
    node * temp=new node(d);
    temp->next=head;
    head=temp;

}
void print(node *&head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->val<< " ";
        temp=temp->next;
    }
}


 int main(){
    node * n=new node(10);
    cout<<n->val<<" "<<n->next;
    node *head=n;
    print(head);
    insert(head,12);
    print(head);

 }