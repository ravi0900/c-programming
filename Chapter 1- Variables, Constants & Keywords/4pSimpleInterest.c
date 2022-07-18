#include<stdio.h>

int main(){
    float principal, rate, years;
    printf("write principle amount rate and year respectively\n");
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &years);

    float interest= (principal*rate*years)/100;

    printf("the simple interest is %f", interest);
return 0;
}