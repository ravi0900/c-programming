#include<stdio.h>

void fun(int n);
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    
return 0;
}

void fun(int n){
    if(n==1){

        printf("*\n");
        return;
       //if you not use return here the program will throw ABR error, since function need a value which is null to complete the function task, and after this programm will not execute further.
    }
    fun(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");

    

}