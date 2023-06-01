class Solution {
public:
    Node* reverseList(Node *head)
    {
        Node *prev = NULL, *curr=head;
        while(curr!=NULL){
            Node *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    

    bool isPalindrome(Node *head)
    {
        // Step 1 : Reach at Mid of Linked List
        Node *fast=head,*slow=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *mid = NULL;
        if(fast==NULL) // List is Even
            mid = slow;
        else           // If List is odd
            mid = slow->next;
            
        // Step 2 : Reverse The Linked List
        Node *curr = reverseList(mid);
        
        // Step 3 : Take 2 Pointer and ptr1 start from Head and ptr2 start from reversed head
        slow = head;
        while(curr!=NULL)
        {
            if(curr->data != slow->data)
                return false;
            curr= curr->next;
            slow = slow->next;
        }
        return true;
    }




};