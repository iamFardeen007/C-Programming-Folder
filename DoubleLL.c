#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

// Insert at end
void insert(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node
void delete(int x) {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct Node* temp = head;

    // If head needs deletion
    if (temp->data == x) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != x)
        temp = temp->next;

    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    free(temp);
}

// Display list
void display() {
    struct Node* temp = head;
    printf("Doubly List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    delete(20);
    display();

    return 0;
}