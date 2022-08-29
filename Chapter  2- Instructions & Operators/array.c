//this is a quiz, progragamm will throw an error at line 14, since place waas not mention for k variable in arr[4], but I corrected
#include<stdio.h>

int

main ()

{

  int arr[4] = { 3, 4, 5, 6 };

//   int k[4];

  int k = arr[4]; // int k=arr[] is error

  printf ("%d  \n arr",k);

  return 0;

}