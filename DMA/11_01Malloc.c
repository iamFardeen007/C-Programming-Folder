#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    // Sizes of operator in c
    //printf("The size of float on my PC is %d\n ",sizeof(float));
    ptr = (int*)malloc(6* sizeof(int));
    for(int i=1;i<7;i++){
        printf("Enter the value of %d element:",i);
        scanf("%d",&ptr[i]);

    }
    for(int i=1;i<7;i++){
        printf("The value of %d element is: %d\n",i,ptr[i]);
    }
    return 0;
}