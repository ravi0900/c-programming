#include<stdio.h>
float avg(float x, float y, float z);
int main(){
     float a,b,c; //e, f, j;
    scanf("%f%f%f",&a,&b,&c);
    // e=a; f=a; j=c;
   
    printf("avarage is %.2f",avg(a,b,c));
return 0;
}
float avg(float x, float y, float z){ //if we use float avg(int x, int y, int z) , in next line must use float k = (float)(x+y+z)/3; to convert this int/int to float/float. this is called as typecasting.
    float k = (x+y+z)/3; // also usable return (x+y+z)/3;
    return k;
}