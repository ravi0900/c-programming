#include<stdio.h>
void printstar(int n);

int main(){
    int n;
    printf("enter the number of line:- ");
    scanf("%d",&n);
    printstar(n);
return 0;
}
void printstar(int n){
    if(n==1){
    printf("*");
    return;

    }
    printstar(n-1);
    for(int i=0;i<(2*n -1 ); i++)
    printf("*");
    printf("\n");
    return;
}
