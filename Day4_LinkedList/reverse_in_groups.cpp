class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *prev=head, *curr= head;
        int a[k],i=0;
        
        while(curr!=NULL){
            a[i]=curr->data;
            curr=curr->next;
            i++;
            
            if(curr==NULL || i==k){
                while(i!=0 && prev!=NULL){
                    i--;
                    prev->data = a[i];
                    prev = prev->next;
                }
            }
        }
        return head;
    }
};
