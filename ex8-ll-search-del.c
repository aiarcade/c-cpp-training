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



Node* deleteNode(Node* head, int data) {
    Node* temp = head;
    Node* prev = NULL;

    // If head node itself holds the data
    if (temp != NULL && temp->data == data) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // If data was not present in the list
    if (temp == NULL) return head;

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);

    return head;
}


int main() {
    Node* head = NULL;


    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    printf("Linked list: ");
    displayList(head);
 

    return 0;
}

