#include <stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=&a[3];
    printf("%p\n",a);
    printf("%d\n",*a);  // *a = Value of a[0]
    printf("%d\n",*(a+2));  // *(a+2) = Value of a[0]
    printf("%d\n",a[2]);
    printf("%p\n",p);
    printf("%d\n",2[a]); // 2[a]=a[2]
    printf("%d\n",*a + 5);  // a[0] jo data ha usme 5 add hojayega
    printf("=%p\n",&a[4]);
    printf("%p\n",a+1);// it will print the addresss of a[1].
    printf("%p\n",&a+1);// it will print address of a[5](address= base address + size of array * total no of element in array)
    printf("%p\n",&a+2); // it will print address of a[10]
    p=a;
    printf("%d",*p);
    return 0;
}