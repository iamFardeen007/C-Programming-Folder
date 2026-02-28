#include <stdio.h>

#define MAX 5 // Maximum size of the stack
int stack[MAX];
int top = -1; // Indicates the stack is empty

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;           // Move pointer up
        stack[top] = value; // Assign value
        printf("Pushed %d onto the stack.\n", value);
    }
}

int main() {
    push(5);
    push(10);
    push(15);
    
    // Display current top
    printf("Current Top Element: %d\n", stack[top]);
    printf(isfull(stack));
    
    return 0;
}