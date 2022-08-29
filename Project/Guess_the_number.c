//have guess number between 1-100, least time guesser will be the winner
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguess=1;
    srand(time(0)); //this generate unique number everytime
    number = rand()%100 +1;
    // printf("number is %d", number);
    
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Number is higher than real\n");
            }
        else if(guess<number){
            printf("Number is lower than the real\n");
            }
        else{
            printf("you guees in %d time",nguess);
            }
        nguess++;
    }while(guess!=number);
    return 0;
}