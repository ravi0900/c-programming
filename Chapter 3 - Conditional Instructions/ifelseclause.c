#include<stdio.h>

int main(){
    int num;
    printf("input any number");
    scanf("%d",&num);
    if(num==1){
        printf("your number is valid");
    }
    else if(num==2){
        printf("your number is invailid");
    }
    else
    {
        printf("input 1 and 2 only");
    }
return 0;
}