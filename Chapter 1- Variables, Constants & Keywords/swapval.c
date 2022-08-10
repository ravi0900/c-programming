#include<stdio.h>

int main(){
    int a=4, b=5,temp;
    temp=a,a=b,b=temp;
    printf("a=%d\tb=%d",a,b);
    


return 0;
}