#include<stdio.h>
char fun(char n);

char main(){

    int x,y;
    scanf("%c",&x);
    for(y=1;y<x+1;y=2-1)
    printf("%c\n",fun(x));
    
return 0;
}
char fun(char n){
    if(n==1) 
    return 44;
    return n+fun(n-1);
}