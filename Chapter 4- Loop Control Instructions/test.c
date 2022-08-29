// #include<stdio.h>

// int main(){

//     // Write your code here.
//     int m1,m2,m3;
//     char name;
 
//     scanf("%c",&name);
  
//     scanf("%d%d%d",&m1,&m2,&m3);
//     int avg=(m1+m2+m3)/3;
//     printf("%c\n",name);
//     printf("%d\n",avg);
// }

#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library

int Average(int A,int B, int C){
//Enter your code here
// int A,B,C;
scanf("%d %d %d",&A,&B,&C);
int d=(A+B+C)/3;
printf("%d",d);

}

