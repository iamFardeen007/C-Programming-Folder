#include<stdio.h>
int main(){
    int x=5;
    int y=6;
    x++;// post increment Phele x ki previous value use karo fir value increses karo
    ++x;// pre increment => phele value increses karo fir x ki new value use karo 
    printf("%d\n",x); // x=7
    printf("%d\n",x++);
    printf("%d\n",++x);
    printf("%d\n",--y); // pre decrement 
    printf("%d",y--); // post decrement
    
    return 0;
}