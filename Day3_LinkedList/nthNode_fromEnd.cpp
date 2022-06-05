int getNthFromLast(struct Node *head, int n)
{
    struct Node* curr = head;
    int c=0;
    while(curr!=NULL){
        c++;
        curr = curr->next;
    }
    if(n>c) return -1;
    c -= n;
    curr = head;
    for(int i=0;i<c;i++){
        curr = curr->next;
    }
    
    return curr->data;
}
