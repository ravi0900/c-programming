// #include <stdio.h>

// int main() {

//   int n, i, prime = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   // 0 and 1 are not prime numbers
//   // change prime to 1 for non-prime number
//   if (n == 0 || n == 1)
//     prime = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change prime to 1 for non-prime number
//     if (n % i == 0) {
//       prime = 1;
//       break;
//     }
//   }

//   // prime is 0 for prime numbers
//   if (prime == 0)
//     printf("%d is a prime number.", n);
//   else
//     printf("%d is not a prime number.", n);

//   return 0;
// }

  
// int f=134.287473278;
    // printf("%e",134.287473278);

//second way
#include<stdio.h>

int main(){
  int n=2, prime=1;
  for(int i=0;i<n;i++){
    if(n%i==0){
      prime=1;
      break;
    }
  if(prime==0){
    printf("this is prime");
  }else{
    printf("this is not prime");
  }
  }
return 0;
}