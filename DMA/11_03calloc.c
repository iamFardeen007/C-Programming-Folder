#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);

    int *arr;
    arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("Element %d is :%d\n",i+1,arr[i]);
    }

    return 0;
}


// --- Gemini code---
// #include<stdio.h>
// #include<stdlib.h> // Essential for calloc() and free()

// int main(){
//     int n;
    
//     // 1. Corrected Prompt (removed uninitialized %d)
//     printf("Enter the size of an array :");
//     scanf("%d",&n);

//     int *arr;
//     // 2. Dynamic Memory Allocation: calloc initializes all elements to 0
//     arr = (int*)calloc(n, sizeof(int));
    
//     // BEST PRACTICE: Always check if allocation failed (returns NULL)
//     if (arr == NULL) {
//         printf("Error: Memory allocation failed.\n");
//         return 1; 
//     }

//     // Input elements
//     for(int i=0; i<n; i++){
//         printf("Enter the %d element :", i+1);
//         scanf("%d", &arr[i]);
//     }
    
//     // Output elements
//     printf("\n--- Array Elements ---\n");
//     for(int i=0; i<n; i++){
//         // Used '\n' for clearer output separation
//         printf("Element %d is :%d\n", i+1, arr[i]); 
//     }
    
//     // 3. BEST PRACTICE: Release the dynamically allocated memory to prevent leaks
//     free(arr);
//     arr = NULL; // Setting the pointer to NULL after freeing is good practice

//     return 0;
// }