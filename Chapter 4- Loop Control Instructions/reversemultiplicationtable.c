#include<stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=10; i;i--){
        int k= n*i;
        printf("%d\n", k);
    }
return 0;
}