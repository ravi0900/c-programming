// #include<stdio.h>

// int main(){
//     // int a,b;
//     // scanf("%2d %3d",&a,&b);
//     // printf("%d %d",a,b);
//     //here i scanf 2d means maximum 2 characters only allow
    
//     // int a,b;
//     // scanf("%d %d",&a,&b);
//     // printf("%5d \n%5d",a,b);
//     //here in printf 5d means minimum 5 character will be printed, they will fill with empty space if sufficitent character not assigne.

//     // float a,b;
//     // scanf("%2f %3f",&a,&b);
//     // printf("%f \n%f",a,b);
//     //input 5 59; 5.1 1.23; 1.23 4.5678 see output using input
//     //here for scanf 2d means maximum 2 chanarter only, accepting decimal point as charecter.

//     // float a,b;
//     // scanf("%f %f",&a,&b);
//     // printf("%4.1f \n%7.1f",a,b);
//     //iput 8.0 5.9; 15.231 65.12345 see output
//     //here for scanf 4.1d means total minimum 4 character by including integer and decimal and maximum 1 character after decimal point value


//     //supression character
//     int a,b,c;
//     scanf("%d %*d %d",&a,&b,&c);
//     printf("%d %d %d",a,b,c);
//     //for input 30 32 34



// return 0;
// }
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}