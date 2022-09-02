#include<stdio.h>

int main(){
    int a=3;
    printf("%d%d%d",a,++a,a++);
return 0;
}

//here the argument is passed from left to right
//so output is a++=4, then ++a =5, then a=5!
//important to know compiler argument pass sequence, mostly happened left to right.
