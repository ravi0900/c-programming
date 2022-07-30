#include<stdio.h>

int main(){
    int i=1,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i;i<10;i++){
        n*i++;
        printf("%d\n",n);
    }
return 0;
}