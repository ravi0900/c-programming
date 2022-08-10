// #include<stdio.h>

// int main(){
//     int a=10,b=20,c=30;
//     if(c>b>a){
//         printf("hello");
//     }
// else{
//     printf("ye kya ho gaya");
// }

// return 0;
// }

#include<stdio.h>
#include<stdbool.h>

int main(){
    int a=2;
    int p=(2>10)||(a=4); //rember bracket is important here, withouth this code error occor 
    printf("a=%d\t",a);
    int b=2;
    p=(2<10)&&(b=0); //rember bracket is important here, withouth this code error occor 
    printf("b=%d\t",b);
    int c=3, d=4;
    p=(2>10)||(c=4)||(d=10); //rember bracket is important here, withouth this code error occor 
    printf("c=%d\t d=%d\t",c,d);

return 0;
}