#include<stdio.h>
void india(){
    printf("you are in India\n");
    void australia();  // function prototyping is used here
    australia();
    return;
}
void england(){
    printf("You are in England\n");
    return;
}
int main(){ //fuction are written in irregular manner
    india();
    return 0;
}
void australia(){
    printf("you are in Australia\n");
    void england(); // func prototyping
    england();
    return;
}