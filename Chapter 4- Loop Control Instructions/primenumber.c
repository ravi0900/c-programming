#include<stdio.h>

int main(){
    int n,prime=0;
    scanf("%d",&n);
    int k=n; //why we need to decalre this extra variable ?
    for(int i=1;i<k;i++){ //1 is not prime number !!
        if(k%i==0){
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