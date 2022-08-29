#include<stdio.h>
int sum(int a, int b); //same for void sum(int a)
int main(){
    int a=56;
    int b=59;
    int c=90;
    sum(a,c);  //here we called sum but value of a and b didn't change in printf, also //same for void sum(int a), and if we pass other parameter it will take value only from main function rather than defined function.
    printf("%d\n%d",a,c);

return 0;
}
int sum(int a, int b){ //same for void sum(int a) 
    a=76;
    b=77;
    return a;
    // return 0;
    // return b;
    // both will not effect printf funtion inside int main function.

}
