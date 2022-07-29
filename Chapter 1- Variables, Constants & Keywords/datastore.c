// #include <stdio.h>
// int main()
// {
// 	// printf("%lu\n", sizeof(char)); // 1  byte
// 	// printf("%lu\n", sizeof(int)); // 4 byte
// 	// printf("%lu\n", sizeof(float)); // 4  byte
// 	// printf("%lu", sizeof(double)); // 8 byte

// // Bit
// // Computer bit and byte
// // A bit is a value of either a 1 or 0 (on or off).

// // Nibble
// // A nibble is 4 bits.

// // Byte
// // Today, a byte is 8 bits.

// // 1 character, e.g., "a", is one byte.
// // Kilobyte (KB)
// // A kilobyte is 1,024 bytes.

//     char b='h';
//     char a=8; //8 is backspace in ascii table

//     printf("%c" ,b);
//     printf("%c" ,a);
// 	return 0;
// }

//how data store
// they store in 0 1 form
// maximux range is -(2^(n-1)) to (2^(n-1))-1 for a bit resgistered memory block

// signed block is reserve in case of sign funtion and remove in unsigned prefix, and withouth any prefix before variable, depents upon compiler where sign block bit is assigned or not

// few example to understand concept

#include<stdio.h>

int main(){
    char a=226581;
    //basically this will convert form int for 4 bytes and use right most byte block for char value and ignore rest 3 byte blocks.
    //so equivalent value for right most value will be printed
    printf("%c",a);

    unsigned int b = -123;
    printf("%u",b);

    //this will produce huge number as output since first it will treat b as int and write in memory block in binary, then take 2's complement where first block will represnt sign on integer, but we declared this as unsigned so ffirst block will again used as proper block for integer instead of minus signed representation.
return 0;
}

