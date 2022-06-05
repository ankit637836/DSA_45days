class Solution
{
   public:
   void linkdelete(struct Node  *head, int M, int N){
        Node *prev=NULL;
        for(int i=1;i<=M && head;i++){
           prev=head;
           head=head->next;
        } 
        if(head==NULL)return;
        for(int i=1;i<=N && head;i++){
           head=head->next;
        }
        prev->next=head;
        linkdelete(head,M,N);
    }
};
