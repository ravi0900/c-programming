#include<stdio.h>

int main()

{

   int b[4]={5,1,32,4};

   int k,l,m;

   k=++b[1];

   l=b[1]++;

   m=b[k++];

   printf("%d, %d, %d",k,l,m);

   return 0;

}




