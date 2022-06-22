#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val){

    
    node* n=new node(val); //create new node
    n->next=head;
    //agar head null nhi hai
    if(head!=NULL){
        head->prev=n;

    }


    head=n;   //n becomes first node

}


void insertAtTail(node* &head, int val){

    //base case jab hamara head null hoga
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n=new node(val);  // new node create kiya
    node* temp=head;   //create temp poiter jo head ko initialize karega

    while(temp->next!=NULL){
        temp=temp->next;      //aise karke last node ko pahuch jayenge
    }

    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head; //create pointer of temp
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    insertAtHead(head,6);
   
    display(head);

    return 0;
}