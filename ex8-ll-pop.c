#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


Node* insertAtBeginning(Node* head, int data) {
    Node* newNode = createNode(data);
    if (!newNode) return head;
    newNode->next = head;
    return newNode;
}



void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int findLength(Node *head)
{
    Node *temp=head;
    int length=0;
    while(temp!=NULL)
    {
        length=length+1;
        temp=temp->next;
    }
    return length;
}

Node * deleteFromBeginning(Node * head)
{
    Node * temp= head;
    Node *new_head=head->next;
    free(temp);
    return new_head;
}


int main() {
    Node* head = NULL;


    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    printf("Linked list: ");
    displayList(head);
    printf("Length %d\n",findLength(head));
    head=deleteFromBeginning(head);
    displayList(head);
 

    return 0;
}
