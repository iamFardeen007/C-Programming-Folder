#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node_Sorted {
    int data;
    struct Node_Sorted* next;
};

// Function to create a new node
struct Node_Sorted* newNode_Sorted(int data) {
    struct Node_Sorted* temp = (struct Node_Sorted*)malloc(sizeof(struct Node_Sorted));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to insert a new node into a sorted linked list
void sortedInsert(struct Node_Sorted** head_ref, int new_data) {
    struct Node_Sorted* new_node = newNode_Sorted(new_data);
    struct Node_Sorted* current;

    // Case 1: List is empty OR new node should be the new head
    if (*head_ref == NULL || (*head_ref)->data >= new_data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        // Case 2: Locate the node before the point of insertion
        current = *head_ref;
        // Traverse as long as the next node exists AND its data is smaller than new_data
        while (current->next != NULL && current->next->data < new_data) {
            current = current->next;
        }

        // Insert new_node after current
        new_node->next = current->next;
        current->next = new_node;
    }
}

// Function to print the linked list (for verification)
void printList(struct Node_Sorted* head) {
    struct Node_Sorted* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Driver code to test the function
int main() {
    struct Node_Sorted* head = NULL;

    // List is currently empty: NULL
    printf("Initial List: ");
    printList(head);

    // Insert 20 (Head insertion)
    sortedInsert(&head, 20); // List: 20 -> NULL
    // Insert 10 (New Head insertion)
    sortedInsert(&head, 10); // List: 10 -> 20 -> NULL
    // Insert 30 (End insertion)
    sortedInsert(&head, 30); // List: 10 -> 20 -> 30 -> NULL
    // Insert 25 (Middle insertion)
    sortedInsert(&head, 25); // List: 10 -> 20 -> 25 -> 30 -> NULL
    // Insert 5 (New Head insertion)
    sortedInsert(&head, 5);  // List: 5 -> 10 -> 20 -> 25 -> 30 -> NULL

    printf("List after insertions: ");
    printList(head);

    return 0;
}