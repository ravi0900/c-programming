#include<stdio.h>
int fun(int n);

int main(){

    int x,y;
    scanf("%d",&x);
    for(y=x;y>=0; y--)
    printf("%d\n",fun(y));
    
return 0;
}
int fun(int n){
    if(n==1) 
    return 1;
    return fun(n-1)+fun(n-2);
}