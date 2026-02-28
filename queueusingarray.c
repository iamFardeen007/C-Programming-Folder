#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// 1. isEmpty(): Checks if the queue has no elements
int isempty() {
    // If front is -1, no elements were ever added
    // If front > rear, all elements have been removed
    if (front == -1 || front > rear) 
        return 1;
    else 
        return 0;
}

// 2. isFull(): Checks if the queue has reached its capacity
int isfull() {
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

// 3. Peek(): Returns the front element without removing it
int peek() {
    if (isempty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    else
    return queue[front];
}

// 4. Enqueue: Adds an element to the back (Rear)
void enqueue(int value) {
    if (isfull()) {
        printf("Queue Overflow! Cannot add %d\n", value);
    } else {
        // If it's the first element being added, set front to 0
        if (front == -1) front = 0;
        
        rear++;           // Increment rear pointer
        queue[rear] = value; // Insert value
        printf("Enqueued: %d\n", value);
    }
}

// 5. Dequeue: Removes an element from the front
int dequeue() {
    if (isempty()) {
        printf("Queue Underflow! Nothing to remove.\n");
        return -1;
    } else {
        int val = queue[front];
        printf("Dequeued: %d\n", val);
        front++;          // Increment front pointer to "remove" the item
        return val;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Front element (Peek): %d\n", peek());

    dequeue();
    dequeue();

    return 0;
}