#include<stdio.h>

int main(){
    int i=1,prime=1,n;
    scanf("%d",&n);
    for(i;i<=n;i++){
        if(i%2==0){
            printf("this is not a prime number%d",n);
            break;
        }
        else{
            printf("this is prime number %d",n);
        

        }
    }
return 0;
}   