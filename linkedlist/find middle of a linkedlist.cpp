/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head){
    
    Node* slow=head;
    Node* fast=head;
     while(fast!= NULL && fast->next!=NULL)
     {
         slow=slow->next;
         fast=fast->next->next;
     }
    return slow->val;
}
