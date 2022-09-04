// unary:- one oprator one operand
//  ~ ! sizeof (typecast)
// ~ it is binary complement oprator

//binary two operant one operator
// are ||, &, ++, --, &, *, +, -, and so on

// ternary operator three operand two operator
//  is :?

#include<stdio.h>

int main(){
    int a=10;
    printf("%d",~a);
    a =sizeof(int);
    printf("\n%d",a);
    // so 1 assigned as 1 00000000000000000000000001 in storage, since in size is 4 byte which is 32bit that store data from -2^(31) to 2^(31) -1
    // 2's complemt is  0 11111111111111111111111111 which will evenvually print the value
    //since negative, o
    //For any integer n, bitwise complement of n will be -(n+1). To understand this, you should have the knowledge of 2's complement.

return 0;
}