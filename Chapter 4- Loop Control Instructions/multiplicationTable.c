#include<stdio.h>

int main(){
    int i=1,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i;i<11;i++){
        int k=i*n;
        printf("%d\n",k);
    }
return 0;
}