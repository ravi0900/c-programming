#include <stdio.h>

int main()
{
    int radias;
    float pi = 3.14159384;
    printf("enter the radias of circle");
    scanf("%d", &radias);
    // printf("the Area of circle is %f",pi*radias*radias);
    printf("the cercumference of circle is %f", 2 * pi * radias);
    int height = 4;
    printf("the volue of cylender is %f", pi * radias * radias * height);
    return 0;
}