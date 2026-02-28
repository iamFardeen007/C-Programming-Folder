/// WAP a program to insert num=9 at the beginning of the array.
#include <stdio.h>

int main() {
    // Initial array. The last 5 elements are automatically initialized to 0.
    // arr is {6, 2, 0, 4, 5, 0, 0, 0, 0, 0}
    int arr[] = {6, 2, 0, 4, 5};
    int num = 9;

    // Correct way to get the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]); // This will be 10

    // To shift elements to the right, we start from the end and move each
    // element one position forward. We must stop before moving the last element
    // out of bounds. The loop runs from i = 9 down to i = 1.
    printf("%d\n",size);
    size++;
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; // Move element from the previous index to the current one
    }

    // Now that space is cleared, insert the new number at the beginning
    arr[0] = num;

    // Print the array. The loop must go from 0 up to (but not including) the size.
    // The condition is i < size, NOT i <= size.
    for (int i = 0; i < size; i++) {
        // Add a space for better readability
        printf("%d ", arr[i]);
    }
    printf("\n"); // Print a newline at the end

    return 0;
}