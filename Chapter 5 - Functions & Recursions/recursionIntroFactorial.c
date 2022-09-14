#include<stdio.h>
int fact(int x);

int main(){
    int a;
    scanf("%d",&a);
    if(a>-1)
    printf("the factorial of %d is %d",a,fact(a));
    else return 0;
return 0;
}
int fact(int x){
    printf("calling factorial (%d)\n",x);
    if(x==1|| x==0){
    return 1;
    }
    else return x*fact(x-1);
}

// hjdjhfdkj