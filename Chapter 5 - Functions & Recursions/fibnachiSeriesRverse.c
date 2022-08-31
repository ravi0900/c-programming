#include<stdio.h>
int fib(int n);

int main(){
    int a;
    printf("enter the number of element: ");
    scanf("%d",&a);
    while(a--){
    printf("%d ",fib(a));
    }
    
return 0;
}
int fib(int n){
    if(n==1|| n==0){
        return 1;
    }
    else return fib(n-1)+fib(n-2);
    
}


