//print first n natural number
#include<stdio.h>

int main(){
    int i=1,n;
    scanf("%d",&n); 
    do{
        printf("%d\n",i);
        i++;
    }while(i<n+1);
return 0;
}