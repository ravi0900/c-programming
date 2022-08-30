#include<stdio.h>
int fact(int x);

int main(){
    int a;
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,fact(a));
    
return 0;
}
int fact(int x){
    printf("calling factorial (%d)",x);
    if(0){ 
    // return 1;
    }
    else return x*fact(x-1);
}
// this will never get out of fact function, and after due to certain limit of memory use in OS, program will exit.