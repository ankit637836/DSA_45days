class Solution
{
    public:
    //Function to check if the linked list has a loop.
    Node detectLoop(Node* head)
    {
        // your code here
        Node* slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
  Node detectFirstNode(Node* head){
    Node* meet = detectLoop(head);
    Node* start = head;
    
    while(start!=meet){
      meet = meet->next;
      start = start->next;
    }
    
    return start;
  }
};
