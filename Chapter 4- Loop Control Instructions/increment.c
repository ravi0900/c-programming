#include<stdio.h>

int main(){
    int i =5;
    printf("%d", i++);
    printf("%d", i);
    printf("%d", ++i);
    printf("%d", i);
    i++;
    printf("%d", i);
    


    //expect output: 5 6 7 7 8

return 0;
}