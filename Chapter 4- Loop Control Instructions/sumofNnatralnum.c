// //useless for loop for sum n natural number
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(int i=1;i<n+1;i++){
//        int k=(n*(2*i+(n-1)))/2;
//        printf("%d\n",k);
//        break;
//     }

// return 0;
// }

// //the right code
// #include<stdio.h>

// int main(){
//     int i,sum=0,n;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(i=1;i<n+1;i++){
//         sum+=i;
//     }
//     printf("the sum of %d number is %d",n,sum);


// return 0;
// }
#include<stdio.h>

int main(){
    int i=1,sum=0,n;
    printf("enter the number");
    scanf("%d",&n);
    do{
        sum+=i;
        i++;
    }while(i<n+1);
    printf("the sum of %d number is %d",n,sum);

    

return 0;
}