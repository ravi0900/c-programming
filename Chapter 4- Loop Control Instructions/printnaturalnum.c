//print first n natural number
// 1st way
// #include<stdio.h>

// int main(){
//     int i=1,n;
//     scanf("%d",&n); 
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<n+1);
// return 0;
// }

//2ndway
// #include<stdio.h>

// int main(){
//     int i=0,n;
//     printf("enter the number");
//     scanf("%d",&n);
//     do{
//         printf("%d\n",i+1);
//         i++;
        
//     }while(i<n);
// return 0;
// }

// //using for loop;
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=1;i<n+1;i++){
//         printf("%d\n",i);
//     }
// return 0;
// }

//using while loop
#include<stdio.h>

int main(){
    int i=1,n;
    printf("enter the number");
    scanf("%d",&n);
    while(i<n+1){
        printf("%d\n",i);
        i++;
    };

return 0;
}