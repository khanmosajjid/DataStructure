{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("
");
}
void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}
}

   
Node *mid(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
   
    struct Node *slow=head;
     struct Node *fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* Merge(Node *a,Node *b){
    if(a==NULL)
      return b;
     else if(b==NULL)
      return a;
     Node *c;
    if(a->data<b->data){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
    
}

Node* mergeSort(Node* head) {
    if(head==NULL||head->next==NULL)
       return head;
    Node *c=mid(head);
   
    Node *a=head;

    Node *b=c->next;
    c->next=NULL;
    a=mergeSort(a);
    b=mergeSort(b);
    Node *d=Merge(a,b);
    
    return d;
    // your code here
}