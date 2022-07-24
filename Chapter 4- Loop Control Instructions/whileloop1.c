//while
//print the value of i from 10-20, without changinf the assigned value of i=0

// #include<stdio.h>
//the mistake i made in wile loop this will not give output since i++ must be out of printf and in while loop block
// int main(){
//     int i=0;
//     while(i<=20){
//         if(i>=10){
//         printf("%d",i);
        
//         i++;
//         }

//     }
// return 0;
// } 


// the coorrect one
#include<stdio.h>

int main(){
    int i=0;
    while(i<=20){
        if(i>=10){
        printf("%d\n",i);
        }
        i++;
        

    }
return 0;
}