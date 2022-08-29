#include<stdio.h>
void display(); // Function prototype

int main(){
    printf("Int main function running\n");
    display(); //function call - when it runs, int main function fall spleep and after finshing this call funtion, int main resume again.
    printf("main function finished \n");
return 0;
}

//function defination - we can define it in function prototype as well, but most of the time it will throw warning and sometimes may be error as well, if calling function inside a function, so recommended to use like this.
void display(){
    printf("Funtion is called sussecfully, and finished\n");
}