#include<stdio.h>
int sum(int n);

int main(){
    int i=1, j;
    scanf("%d",&j);

    for(i=1; i<j; i++)
    printf("%d",fun(j));
    
return 0;
}
int sum(int n){
    if(n==1)
    return 1;
    return (n-1)+(n-2);
}
