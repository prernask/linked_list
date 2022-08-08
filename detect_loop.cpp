#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data){
    struct Node* new_node = new Node;

    new_node->data = new_data;

    new_node->next=(*head_ref);
    (*head_ref) =new Node;
}
bool detectLoop(struct Node* head){
    Node *slow_ptr=head;
    Node* fast_ptr=head;
    while(slow_ptr && fast_ptr && fast_ptr->next){
        slow_ptr = slow_ptr->next;
        fast_ptr= fast_ptr->next->next;
        if(slow_ptr == fast_ptr){
            return 1;
        }
    }
    return 0;
}
int main(){
    Node* head=NULL;
    push(&head, 20);
    push(&head, 20);
    push(&head, 20);
    push(&head, 20);


    head->next->next->next->next=head;
    if(detectLoop(head))
     cout<<"Loop found";
    else 
       cout<<"no loop";




    return 0;
}