// half of the number
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    // Type casting
    float f=(float)x;  // jis data type me change karna use bracket ke andar likho
    printf("%f",f/2);
    return 0;
}