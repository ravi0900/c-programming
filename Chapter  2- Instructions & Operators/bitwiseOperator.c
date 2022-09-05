// credit:-  https://www.programiz.com/c-programming/bitwise-operators#left-shift

// ^ xor operator
#include <stdio.h>
int main() {
    int a = 10, b = 31; //31= 0001 1111, 10 =0000 1010 so 10^31= 0000 1010 XOR 0001 1111 = 0001 0101 which is 21;
    printf("Output = %d", a^b);
    return 0;
}

// | or operator
#include <stdio.h>
int main() {
    int a = 12, b = 25;
    printf("Output = %d", a|b);
    return 0;
}
/*12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise OR Operation of 12 and 25
  00001100
& 00011001
  ________
  00011101  = 29 (In decimal)
  */

 // & oprator

#include <stdio.h>
int main() {
    int a = 12, b = 25;
    printf("Output = %d", a&b);
    return 0;
}
/*
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bit Operation of 12 and 25
  00001100
& 00011001
  ________
  00001000  = 8 (In decimal)
*/

// ~ complement operator
#include <stdio.h>
int main() {
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
    return 0;
}
/*
Decimal         Binary           2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)

Note: Overflow is ignored while computing 2's complement.
*/


// left << and right >> shift oprator 

#include <stdio.h>
int main() {
    int num=212, i;
    for (i=0; i<=2; ++i) {
        printf("Right shift by %d: %d\n", i, num>>i);
    }
    printf("\n");

    for (i=0; i<=2; ++i) {
        printf("Left shift by %d: %d\n", i, num<<i);    
    }

    return 0;
}

/*
right shift
212 = 11010100 (In binary)
212>>2 = 00110101 (In binary) [Right shift by two bits]
212>>7 = 00000001 (In binary)
212>>8 = 00000000 
212>>0 = 11010100 (No Shift)

left shift
212 = 11010100 (In binary)
212<<1 = 110101000 (In binary) [Left shift by one bit]
212<<0 = 11010100 (Shift by 0)
212<<4 = 110101000000 (In binary) =3392(In decimal)
*/

