#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the structure of the linked list
typedef struct {
    Node* head;
} LinkedList;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the beginning of the linked list
void insertAtBeginning(LinkedList* list, int data) {
    Node* newNode = createNode(data);
    newNode->next = list->head;
    list->head = newNode;
    printf("%d inserted at the beginning\n", data);
}

// Function to delete from the beginning of the linked list
int deleteFromBeginning(LinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty\n");
        return -1;
    }
    Node* temp = list->head;
    int data = temp->data;
    list->head = temp->next;
    free(temp);
    return data;
}

// Function to print the linked list
void printList(LinkedList* list) {
    Node* current = list->head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function to test the linked list operations
int main() {
    LinkedList list;
    list.head = NULL;

    insertAtBeginning(&list, 10);
    insertAtBeginning(&list, 20);
    insertAtBeginning(&list, 30);

    printList(&list);

    int deleted = deleteFromBeginning(&list);
    if (deleted != -1) {
        printf("Deleted value: %d\n", deleted);
    }

    printList(&list);

    return 0;
}
