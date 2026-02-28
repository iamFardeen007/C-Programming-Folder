#include <stdio.h>
#include <stdlib.h> // For malloc and free

struct Student {
    int id;
    char name[50]; // Fixed-size name for simplicity
};

int main() {
    int N = 2; // Let's simplify and fix N=2 for this example
    
    // 3. Dynamically allocate memory for an array of N students
    struct Student *student_array = (struct Student*) malloc(N * sizeof(struct Student));
    
    if (student_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 4. Initialize the first student
    student_array[0].id = 101;
    snprintf(student_array[0].name, 50, "Alice");

    // 5. Print the details of the first student (using pointer arithmetic/indexing)
    printf("Student 1 Details:\n");
    // Accessing student_array[0] is equivalent to (*(student_array + 0))
    printf("ID: %d\n", (student_array + 0)->id); 
    printf("Name: %s\n", (student_array + 0)->name);

    // 6. Free the allocated memory
    free(student_array); 
    student_array = NULL; // Good practice
    
    return 0;
}