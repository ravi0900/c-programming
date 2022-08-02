#include<stdio.h>

int main(){
    int i=1,prime=1,n;
    scanf("%d",&n);
    for(i;i<=n;i++){
        if(n%2==0){
            printf("this is not a prime number%d",n);
        }
        else{
            printf("this is prime number %d",n);
        

        }
        break;
    }
    // int f=134.287473278;
    // printf("%e",134.287473278);
return 0;
}   