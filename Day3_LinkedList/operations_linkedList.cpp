#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data){
    //Alocate Memory to a node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    //insert data;
    newNode->data = new_data;
    newNode->next = (*head_ref);
    (*head_ref) = newNode;
}

void insertAfter(struct Node* prev_node , int new_data){
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = new_data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

void insertAtEnd(struct Node** head_ref, int new_data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    newNode->data = new_data;
    newNode->next = NULL;

    if(*head_ref==NULL){
        *head_ref = newNode;
        return;
    }

    while(last->next!=NULL){
        last = last->next;
    }

    last->next = newNode;
}

void deleteNode(struct Node** head_ref, int key){
    struct Node *temp = (*head_ref), *prev;

    if(temp!=NULL && temp->data==key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }

    //if key is not present
    if(temp==NULL) return;

    //remove the node
    prev->next = temp->next;

    free(temp);
}

bool searchNode(struct Node** head_ref, int key){
    struct Node* current = (*head_ref);

    while(current!=NULL){
        if(current->data==key) return true;

        current = current->next;
    }

    return false;
}

void sortList(struct Node** head_ref){
    struct Node *current = (*head_ref), *index = NULL;

    int temp;

    if(head_ref==NULL){
        return;
    }else{
        while(current!=NULL){
            index = current->next;

            while(index!=NULL){
                if(current->data>index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

void printList(struct Node** head_ref){
    struct Node* curr = *head_ref;

    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<"\n";
}
/*
void printList(struct Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<"\n";
}

//while calling it should be printList(head) instead of printList(&head);
*/

int main(){
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    cout << "Linked list: ";
    printList(&head);

    cout << "After deleting an element: ";
    deleteNode(&head, 3);
    printList(&head);

    int item_to_find = 3;
    if (searchNode(&head, item_to_find)) {
    cout << item_to_find << " is found\n";
    } else {
    cout << item_to_find << " is not found\n";
    }

    sortList(&head);
    cout << "Sorted List: ";
    printList(&head);
}
