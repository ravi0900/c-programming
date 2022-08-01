#include<stdio.h>

int main(){
    int n, fact=1;
    scanf("%d",&n);
    int i=n;

    for(i;i;i--){
        fact*=i;
    }
    printf("Factorial of %d factorial is %d",n,fact);
return 0;
} 