#include<stdio.h>
int fib(int n);

int main(){
    int i, j;
    printf("enter the number of element: ");
    scanf("%d",&j);
    for(i=1;i<j+1;i++){ //here why putting i=0 give error of address boundry error, because ...
    printf("%d ",fib(i));
    }
    
return 0;
}
int fib(int n){
    if(n==1|| n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2); //not need to add else ! using else will also give the same result, but will take more cpu resources.
    
}