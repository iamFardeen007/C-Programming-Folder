#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void LinkedlistTraversal(struct Node*ptr)
{
    while(ptr!= NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

// Allocate memory for nodes in the linked list in heap (Allocating memory dynamically)
    head = (struct Node*) malloc(sizeof(struct Node));
    second =(struct Node*) malloc(sizeof(struct Node));
    third =(struct Node*) malloc(sizeof(struct Node));
    fourth =(struct Node*) malloc(sizeof(struct Node));
    
// Link first and second nodes 
    head->data = 7;
    head->next = second;

// Link second and third nodes 
    second->data = 11;
    second->next =third;

// Terminate the list atthe third node 
    third->data = 66;
    third->next = fourth;

// Terminate the listat the third nodes 
    fourth->data = 78;
    fourth->next = NULL;

    // printf("%p \n",&second);
    // printf("%d \n",*head->next);
    // printf("%p \n",&head);
    // printf("%p \n",&third);
    // printf("%lu \n",sizeof(struct Node));
    // printf("%p \n",&head->next);

    LinkedlistTraversal(head);
    return 0;
}
