// // this is example of good poor coder
// #include<stdio.h>
// int main(){
//     int i=1;
//     for(i;i<100;i++){
//         if(i%3!=0&&i%5!=0&&i){
//             printf("%d\n",i);
//         }
//         if(i%3==0 &&i%5==0){ //this condition must be used first, else you are a dumb.
//             printf("fizzbuzz\n"); 
//         }
//         if(i%3==0 && i%5!=0){
//             printf("fizz\n");
//         }
//         if(i%5==0&& i%3!=0){
//             printf("buzz\n");
//         }
//     }
// return 0;
// }

//exmaple for great coder, i did this my own, may be this code can be improve, multiple division modulo take more resources to execute, so using ++ is better.
#include<stdio.h>
int main(){
    int a=0, b=0;
    for(int i=1;i<100;i++){
        a++;
        b++;
        if(a==3){
            printf("fizz\n");
        }
        else if(b==5){
            printf("buzz\n");
        }
        else if(a==15){
        printf("fizzbuzz\n");
        a=0;
        b=0;
        }
        else printf("%d\n",i);
        }
return 0;
}