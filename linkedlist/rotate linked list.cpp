Node* rotateRight(Node* head, int R){
    if(head==NULL ||head->next==NULL ||R==0)
     return head;
     
     Node* current=head;
     int len=1;
     while(current->next!=NULL)
     {
         len++;
         current=current->next;
     }
     current->next=head;
    R=R%len;
    R=len-R;
    
    while(R--)
    {
        current=current->next;
        
    }
    head=current->next;
    current->next=NULL;
    
    return head;
}