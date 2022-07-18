#include<stdio.h>

int main(){
    char ch;
    printf("enter the alphabate");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122){
    printf("charecter is lowercase");
        
    }
    //https://www.rapidtables.com/code/text/ascii-table.html  ASCI table referance
    else{
    printf("charater is uppercase");
        
    }
return 0;
}