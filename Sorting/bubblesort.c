#include <stdio.h>
int main()
{
    int arr[5] = {5, 4, 3, 2, 1}; // if array in decending then it will be a worst case
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)// it denote no of passes 
    {
        for (int j = 0; j <= n - 2; j++)// instead of this for(int j=0;j<n-1-i;j++) <=This will take less step and run faster
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}