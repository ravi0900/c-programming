#include<stdio.h>

int main(){
    int i=1, k;
    scanf("%d",&k);
    for(i=1;k--;k){
        
        printf("%d\n",i);
        i+=2;
    };

return 0;
}

//other complicated way
#include<stdio.h>

int main(){
    int i=0, j=1, k;
    scanf("%d",&k);
    for(k;k;k--){
        printf("%d\n",i+j);
        i++;
        j++;
    };

return 0;
}