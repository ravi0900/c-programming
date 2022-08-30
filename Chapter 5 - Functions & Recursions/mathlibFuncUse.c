#include<stdio.h>
#include<math.h>
int main(){
    float a;
    scanf("%f",&a);
    printf("sqare of is %f \n", pow(a,2));
    
return 0;
}
// intresting ! my code runner not able to run this, error: undefined reference to `pow' error: ld returned 1 exit status, this issue occurs due to linker issue, who not able to see defination of math.h function, although i used g++, and "gcc -o mathlibFunc mathlibFuncUse.c -lm" to run the code, and run successfully!