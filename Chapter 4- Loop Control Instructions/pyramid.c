#include<stdio.h>

int main(){
    int i,j,rows,star=0;
    printf("Enter the number of pyramid base");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=(rows-i-1);j++){
        printf(" ");
        }
        while(star!=(2*i+1)){
            printf("*");
            star++;

        }
        star=0;
        printf("\n");
    
    }
return 0;
}