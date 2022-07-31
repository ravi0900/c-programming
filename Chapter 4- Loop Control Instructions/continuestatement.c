#include<stdio.h>

int main(){
    int skip=5,i=0;
    for(i;i<10;i++){
        // if(i=skip){ //this lead to infinite loop of null value, just increce cpu usage, incase of defince function this will keep executing that function
        if(i=skip){
            //here the code will executed for not equal to 5 like 1 to 4 then 6 to 9 but for 5 it will lookup else or simply not print anything.
            
            printf("%d\n",i);
            continue;
        }
        else{
            printf("popat\n");
        }
    }
return 0;
}