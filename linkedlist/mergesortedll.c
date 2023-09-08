/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode dummy(0);
        ListNode* merge = &dummy;
        ListNode *l1=list1;
        ListNode *l2=list2;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2->val)
            {
                merge->next=l1;
               l1=l1->next;
            }
            else
            {
               merge->next=l2;
                l2=l2->next;
            }
            merge=merge->next;
        }
        if(l1==NULL)
        {
            merge->next=l2;
        }
        else if(l2==NULL)
        {
           merge->next=l1;
        }
         return dummy.next;
    }
   
};