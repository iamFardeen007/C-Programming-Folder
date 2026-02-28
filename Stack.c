#include <stdio.h>

#define MAX 5 
int stack[MAX];
int top = -1; 

// Checks if stack is full
int isfull() {
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

// Checks if stack is empty
int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

// Returns the top element without removing it
int peek() {
    if (!isempty())
        return stack[top];
    else
        return -1;
}

void push(int value) {
    if (isfull()) { // Using isfull() here makes the code cleaner!
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;           
        stack[top] = value; 
        printf("Pushed %d onto the stack.\n", value);
    }
}

int main() {
    push(5);
    push(10);
    push(15);
    
    // Using Peek instead of direct access
    printf("Current Top Element: %d\n", peek());
    
    // Correct way to print the status of isfull
    if (isfull()) {
        printf("The stack is full.\n");
    } else {
        printf("The stack is not full yet. Space remaining: %d\n", (MAX - 1) - top);
    }
    int n=top;
    for(int i=n;i>-1;i--){
        printf(" %d ",stack[i]);
    }
    
    return 0;
}