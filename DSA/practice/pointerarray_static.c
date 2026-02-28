#include<stdio.h>
int main(){
    int data[5]={10,20,30,40,50};
    int *p=data;
    for(int i=0;i<5;i++){
        printf("Element %d: %d\n",i+1,*p);// (*)-> derefrencing p to get the value
        p++; 
    }
    return 0;
}