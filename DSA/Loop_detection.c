#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to detect a loop using Floyd's Cycle-Finding Algorithm
bool detectLoop(struct Node* head) {
    // Initialize two pointers
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        // Slow pointer moves one step
        slow_ptr = slow_ptr->next;
        // Fast pointer moves two steps
        fast_ptr = fast_ptr->next->next;

        // If they meet, there is a loop
        if (slow_ptr == fast_ptr) {
            return true;
        }
    }
    // If fast_ptr reaches NULL or its next is NULL, no loop exists
    return false;
}

// Driver code to test the function
int main() {
    // 1. Create a linked list with a loop (e.g., 1 -> 2 -> 3 -> 4 -> 5 -> 3...)
    struct Node* head_loop = newNode(1);
    head_loop->next = newNode(2);
    head_loop->next->next = newNode(3);
    head_loop->next->next->next = newNode(4);
    head_loop->next->next->next->next = newNode(5);

    // Create the loop: 5 points back to 3
    head_loop->next->next->next->next->next = head_loop->next->next; 

    if (detectLoop(head_loop)) {
        printf("Test 1: Loop detected in the list.\n");
    } else {
        printf("Test 1: No loop detected in the list.\n");
    }
    
    // 2. Create a linked list without a loop (e.g., 6 -> 7 -> 8)
    struct Node* head_no_loop = newNode(6);
    head_no_loop->next = newNode(7);
    head_no_loop->next->next = newNode(8);

    if (detectLoop(head_no_loop)) {
        printf("Test 2: Loop detected in the list.\n");
    } else {
        printf("Test 2: No loop detected in the list.\n");
    }

    return 0;
}