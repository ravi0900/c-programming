#include<stdio.h>
int fun(int n);

int main(){

    int x;
    scanf("%d",&x);
    printf("%d\n",fun(x));
    
return 0;
}
int fun(int n){
    if(n==1) 
    return 1;
    return n+fun(n-1);
}