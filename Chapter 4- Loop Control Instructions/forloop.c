#include<stdio.h>

int main(){
    for(int i=0;i<23;i++){
        printf("%d\n",i);
        if(i==10){
            break;
        }
        //it will simply break the loop when get i=10
    };
return 0;
}