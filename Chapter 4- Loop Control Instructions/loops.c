 


//example

#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a=5; //is is really worth it assigning this after scanning input ?? so for assigning true for loop it will never stop even giving a false input, and for false value it not matter it simply terminate the loop and will not print anything even you give a true value input.
    while(a<10){
        printf("%d\n",a);
        a++;
    }
    // a++; // if this is outside loop will keeep printinting input value for true condtion 

return 0;
}