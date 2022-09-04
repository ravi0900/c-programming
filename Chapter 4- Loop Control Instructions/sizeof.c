#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <float.h>

// int main(int argc, char** argv) {

//     printf("CHAR_BIT    :   %d\n", CHAR_BIT);
//     printf("CHAR_MAX    :   %d\n", CHAR_MAX);
//     printf("CHAR_MIN    :   %d\n", CHAR_MIN);
//     printf("INT_MAX     :   %d\n", INT_MAX);
//     printf("INT_MIN     :   %d\n", INT_MIN);
//     printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
//     printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
//     printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
//     printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
//     printf("SHRT_MAX    :   %d\n", SHRT_MAX);
//     printf("SHRT_MIN    :   %d\n", SHRT_MIN);
//     printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
//     printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
//     printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
//     printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

//     return 0;
// }