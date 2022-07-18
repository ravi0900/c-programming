#include <stdio.h>
int main(){
     int a=4;
     int b=5.6; //not recommnend
     float c=5.6;
     char d='u'; 
     char e='hello';
    //you need to use double quotes ("hello" instead of 'hello') for your strings, otherwise they are character literals.
    //read more https://stackoverflow.com/questions/9130112/compiler-error-character-constant-too-long-for-its-type-whats-wrong

    //  printf("Vaule of a is %d",a);
    //  printf("Vaule of b is %d",b); // will run and get intiger value only but not recommended
    //  printf("Vaule of c is %f",c);
    //  printf("Vaule of d is %c",d);
    //  printf("Vaule of d is %c %c",d,d);
    //  printf("sum of a+b is %d" ,a+b);
    
    return 0;
}