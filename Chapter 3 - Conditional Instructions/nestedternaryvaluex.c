#include<stdio.h>

int main(){
    int a,x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    a=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("%d",a);
return 0;
}
// this will print highest value among x,y,z