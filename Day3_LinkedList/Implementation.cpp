// Linked list implementation in C++

#include <bits.stdc++.h>
using namespace std;

// Creating a node
class Node{
  public:
  int data;
  Node* next;
};

int main(){
  Node* head;
  Node* one;
  Node* two;
  Node* three;
  
  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();

  //Assign Value
  one->data = 1;
  two->data = 2;
  three->data = 3;

  //Connecting Nodes
  one->next = two;
  two->next = three;
  three->next = NULL;
  
  // print the linked list value
  head = one;
  while (head != NULL) {
    cout << head->value;
    head = head->next;
  }

}

/*Time Complexity
    Search = O(n)
    Insert = O(1)
    Delete = O(1)
    
  Space Complexity: O(1)
  
  
Linked List Applications:
    Dynamic memory allocation
    Implemented in stack and queue
    In undo functionality of softwares
    Hash tables, Graphs
*/
