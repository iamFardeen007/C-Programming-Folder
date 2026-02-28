#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("you are in Australia\n");
    england();
    return;
}
void india(){
    printf("you are in India\n");
    australia();
    return;
}
int main(){
    india();
    return 0;
}


// belowcode will not run (watch https://www.youtube.com/watch?v=mIY3QVktHU8&t=1431s from 36:00)
// #include<stdio.h>
// void india(){
//     printf("you are in India\n");
//     australia();
//     return;
// }
// void england(){
//     printf("You are in England\n");
//     return;
// }
// void australia(){
//     printf("you are in Australia\n");
//     england();
//     return;
// }

// int main(){ //fuction are written in irregular manner
//     india();
//     return 0;
// }