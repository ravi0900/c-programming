//percent calculator 
// #include<stdio.h>
// // int main(){
// //     int physics, math, chemist;
// //     printf("enter mark of physics ");
// //     scanf("%d",&physics);
// //     printf("enter mark of ,math");
// //     scanf("%d",&math);
// //     printf("enter mark of chemistry");
// //     scanf("%d",&chemist);

// //     float total = (physics+math+chemist)/3;
// //     if((total<40)||physics<33||math<33||chemist<33){
// //         printf("your percent is %f and you are fail",total);}

// //     else{
// //         printf("your percent is %f and you are pass",total);
// //     }
    


// // return 0;
// // }

// Tax calculator
// #include<stdio.h>

// int main(){
//     float income, tax=0.0;
//     printf("what is your income");
//     scanf("%f",&income);
//     if(income>=250000 && income<=500000){
//         tax=tax+0.05*(income-250000);
        

//     }
//     else if (income>=500000 && income<=1000000){
//         tax=tax+0.20*(income-500000);
        

//     }    

//     else if (income>=1000000){
//         tax=tax+0.30*(income-1000000);
        
        

//     }
    
// printf("your tax is %f",tax);
// return 0;
// }


//leap year finder
#include<stdio.h>
int main(){
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%100==0&&year%400==0){
        printf("this is leap year");
    }
    else if(year%4==0&& !(year%100==0)){
        printf("this is a leap year");
    }
    else{
        printf("this is not a leap year");
        
    }
return 0;
}

// #include<stdio.h>

// int main(){
//     int num1,num2,num3,num4, maxi;
//     printf("enter the 4 number");
//     scanf("%d",&num1);
//     scanf("%d",&num2);
//     scanf("%d",&num3);
//     scanf("%d",&num4);

// if(num1>num2&&num1>num3&&num1>num4){
// printf("the largest number is %d",num1);
    
// }
// else if(num2>num3&&num2>num4&&num2>num1){
// printf("the largest number is %d",num2);
    
// }
// else if(num3>num4&&num3>num1&&num3>num2){
// printf("the largest number is %d",num3);
    
// }
// else if(num4>num1&&num4>num2&&num4>num3){
// printf("the largest number is %d",num4);
    
// }


// return 0;
// }