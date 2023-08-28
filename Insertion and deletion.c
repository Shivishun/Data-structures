#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int value) {
 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

 
    newNode->data = value;

 
    newNode->next = *head;

 
    *head = newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("Linked list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("Linked list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;
    }

    free(temp);
}

void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("Linked list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void displayList(struct Node* head) {
    struct Node* temp = head;

 
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

     insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

 
    printf("Linked List: ");
    displayList(head);

 
    deleteAtBeginning(&head);

     printf("Linked List after deletion at the beginning: ");
    displayList(head);

 
    deleteAtEnd(&head);

   
    printf("Linked List after deletion at the end: ");
    displayList(head);

    deleteAtPosition(&head, 1);

    printf("Linked List after deletion at a specific position: ");
    displayList(head);

    return 0;
}