#include<stdio.h>
int sum(int a, int b); //same for void sum(int a)
int main(){
    int a=56;
    int b=59;
    sum(a,b);  //here we called sum but a value didn't change in printf, also //same for void sum(int a)
    printf("%d\n%d",a,b);

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
