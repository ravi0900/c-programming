#include<stdio.h>

int main(){
    int n=2,prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;
        }
    }
    if(prime==0){
        printf("this is not a prime number");
    
    }
    else{
        printf("this is prime");
    }
return 0;
}