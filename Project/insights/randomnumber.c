#include<stdio.h>
#include<stdlib.h> //for rand()
#include<time.h> //time for rand() function


int main(){
    int number;
    srand(time(0)); //this generate unique number everytime, if not used, one random will generate but same number will print again and again.
    number = rand(); // here we can use % oprator to limit number range, like rand()%100+1 will print 1 to 100 number.
    printf("number is %d", number);
return 0;
}