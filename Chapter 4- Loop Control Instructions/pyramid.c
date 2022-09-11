#include<stdio.h>

int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=2*rows-1;j++){
            if(j>=rows-(i-1)&&j<=rows+(i-1))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
return 0;
}
//concept derived from matrix nested loop, where for n rows we need 2n-1 coloumn and, where on nth rows coloum will containing * is:-  nth rows -(i-1)&& row+(i+1)