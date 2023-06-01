/*struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *n) : val(x), next(n) {}
  };
  */
class Solution{
	public:
	Node* rearrange(Node* head)
	{
		//CODE HERE
		Node* even=head;
		Node* odd=head;
		Node* newlist=NULL;
		Node* end=NULL;
		
		
		while(even)
		{
		    if(even->val % 2 ==0)
		    {
		        Node* newnode=new Node(even->val);
		        if(!newlist)
		        {
		            newlist=newnode;
		            end=newnode;
		        }
		        else
		        {
		            
		        
		        end->next=newnode;
		        end=newnode;
		        }
		        
		    }
		    
		    
		    even=even->next;
		}
		
		
			while(odd)
		{
		    if(odd->val % 2 !=0)
		    {
		        Node* newnode=new Node(odd->val);
		        if(!newlist)
		        {
		            newlist=newnode;
		            end=newnode;
		        }
		        else
		        {
		        end->next=newnode;
		        end=newnode;
		        }
		        
		    }
		    
		    
		    odd=odd->next;
		}
	
		return newlist;
	}
};