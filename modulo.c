#include<stdio.h>
int main(){
    int a=343;
    int b=13;
    int c=a%b;
    printf("%d",c);

    return 0;

}
// 1) a%(-b)=a%b
// 2) (-a)%b= -(a%b)
// 3) a%b = a  if a<b
// 4) (-a)%(-b)=-(a%b)