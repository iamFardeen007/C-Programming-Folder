#include<stdio.h>
# define CAPACITY 50
int main(){
    int a[CAPACITY],size,pos;
    printf("Enter the size of array (1 to %d):",CAPACITY);
    scanf("%d",&size);
    if (size <= 0 || size > CAPACITY) {
        printf("Error: Size must be between 1 and %d.\n", CAPACITY);
        return 1; // Exit with an error code
    }
    printf("Enter element in array :");
    for(int i=0;i<size;i++) {
            scanf("%d",&a[i]);
    }
    printf("From which position you want to delete data:");
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
       printf("invalid podition ");
    }
    else{
     for(int i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
     }

    size--;
    printf("Array after deletion is; \n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    }
    return 0;
}