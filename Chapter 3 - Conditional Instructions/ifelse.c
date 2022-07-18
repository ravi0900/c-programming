//really nice if else condition.
#include<stdio.h>

int main(){
     int age, btech=1;
     printf("Enter your age");
     scanf("%d",&age);
    //  if(age == 30){
   //   if(age !=30){
     if(age <= 30 && age >=18|| (btech!=0)){ //(btech!=1) is same as !(btech==1)
        printf("your are eligible for this role");
     }
     //if age=30, instead ==30, this lead to true condition, hence compiler understand 0 as false and other than 0 as true condition in conditional statement condition.
     else{
        printf("you are not eligible");
        }
return 0;
}
