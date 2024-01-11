// creat an array of size 10 using linked list 
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node * next;
    node(int d){
        this->val=d;
        this->next=NULL;
    }
};
void insert(node *&head , int d){
  
        node *temp=new node(d);
        temp->next=head;
        head=temp;

    
}
void print(node*&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->next;


    }


}
int main(){
    node *n=new node(NULL);
    node *head=n;
    int d;
    cout<<"enter the number";
    for(int i=0;i<10;i++){
        cin>>d;
        insert(head,d);

    }
print(head);

}