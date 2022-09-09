#include<stdio.h>

int main(){
    int rows, col, i,j;
    printf("enter number of rows and colom:- ");
    scanf("%d%d",&rows,&col);
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            if(i==0|| i== rows-1|| j==0|| j==col-1)
            printf("*");
            else printf(" ");

        }
        printf("\n");
    
       
    }
return 0;
}