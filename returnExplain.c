#include <stdio.h>

// Function to check age
int isVotingAge(int age) {
    if (age >= 18) {
        return 1; // Represents "True" or "Yes"
    } else {
        return 0; // Represents "False" or "No"
    }
}

int main() {
    int myAge = 16;
    
    // The if statement checks the return value
    if (isVotingAge(myAge) == 1) {
        printf("You can vote!");
    } else {
        printf("You are too young.");
    }
    
    return 0;
}