Node* remove(Node* head, int position){
    if (position == 1) {
        Node* next = head->next;
        head->next = NULL;
        head = next;
    } else {
        int i = 0;
        Node* current = head;
        while (i < position-2) {
            i++;
            current = current->next;
        }
        Node* next = current->next;
        if (next->next != NULL) {
            Node* next_next = next->next;
            next->next = NULL;
            current->next = next_next;
        } else {
            current->next = NULL;
        }
    }
    return head;
}

Node* insert(Node* head, int position, int value){
    int i = 1;
    Node* current = head;
    if(position==1) {
        Node* new_node = new Node(value);
        new_node->next = current;
        head = new_node;
    } else {
        while (i < position-1) {
            i++;
            current = current->next;
        }
        Node* new_node = new Node(value);
        if (current->next != NULL) {
            Node* next = current->next;
            current->next = new_node;
            new_node->next = next;
        } else {
            current->next = new_node;
        }
    }
    return head;
}
