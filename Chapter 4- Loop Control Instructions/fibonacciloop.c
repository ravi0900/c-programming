#include<stdio.h>

int main(){
    int i=0, j=1, k, number, l;
    printf("enter the number of elements: ");
    scanf("%d",&number);
    
    printf("%d ",i);
    printf("%d ",j);
    for(l=2;l<number;++l){
        k=i+j;
        printf("%d ",k);
        i=j;
        j=k;
    };

return 0;

}