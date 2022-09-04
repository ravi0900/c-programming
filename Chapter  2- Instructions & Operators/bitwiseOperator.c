// https://www.programiz.com/c-programming/bitwise-operators#left-shift
#include <stdio.h>
int main() {
    int a = 10, b = 31; //31= 0001 1111, 10 =0000 1010 so 10^31= 0000 1010 XOR 0001 1111 =;
    printf("Output = %d", a^b);
    return 0;
}