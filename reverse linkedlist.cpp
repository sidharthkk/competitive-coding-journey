/*struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};*/

Node* reverseList(Node* head) {
    Node* prev=NULL;
    Node* net=NULL;
    while(head!=NULL)
    {
     net=head->next;
     head->next=prev;
     prev=head;
     head=net;
    }
    head=prev;
    return head;
    
    
}