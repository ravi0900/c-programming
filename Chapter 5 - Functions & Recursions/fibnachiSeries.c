// #include<stdio.h>
// int fib(int n);

// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("the series is %d is %d",a,fib(a));
    
// return 0;
// }
// int fib(int n){
//     if(n==1|| n==0)
//     printf("%d",n--) ;
//    else return (n-1)+(n-2);
// }

#include<stdio.h>

int main(){
    int i=0, j=1, k;
    scanf("%d",&k);
    for(k;k;k--){
        printf("%d",i+j);
        i++;
        j++;
    };

return 0;
}