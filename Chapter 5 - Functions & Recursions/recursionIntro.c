#include<stdio.h>
int fun(int n){
    if (n==1){
        return 1;
    }
    else return 1+ fun(n-1);
}

int main(){
    int n=10;
    printf("%d",fun(n));
    
return 0;
}
//guess the output ?

//explanation:- 1 step = 1+fun(2)--> | 2 step = fun(2)-->1+fun(1)--> | 3 step =fun(1)--> 1. so putting those value on step 1st we get 1+1+1=3 is output.