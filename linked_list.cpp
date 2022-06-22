#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data =data;
        this -> next = NULL;
    }

};

// insertAtHead matlab linked list ke node starting me insert hoga
void insertAtHead(Node* &head, int d){

    //new node create 

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;


}
// ending node ke aage new node add karega
//tail is a pointer of node type which will always indicated to last node
void insertAtTail(Node* &tail, int d){
    //new node create 
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, int position, int d){
    Node* temp = head;
    int cnt =1;

    while(cnt< position-1){
        temp=temp->next;
        cnt++;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp->next = nodeToInsert;

}

void print(Node* &head){
    Node* temp =head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;



}
int main(){
    //created a new node
    Node* node1 = new Node(10);
    //cout<< node1 -> data<< endl;
    //cout<< node1->next <<endl;


    //haed pointed to node1
    Node* head = node1;    // single node ko head bole
    Node* tail = node1;     //single node ko hi tail bole

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20 );
    print(tail);

    insertAtTail(tail, 30 );
    print(tail);
    insertAtTail(tail, 40 );
    print(tail);

    insertAtPosition(head, 3, 33);
    print(head);




    return 0;

}