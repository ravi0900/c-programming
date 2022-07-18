#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating (1-5)");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("yout rating is 1");
        break;
    case 2:
        printf("yout rating is 2");
        break;
    case 3:

        printf("yout rating is 3");
        break;
    case 4:

        printf("yout rating is 4");
        break;
    case 5:

        printf("yout rating is 5");
        break;
        //break is important to stop switching next statement after finding match.
    }
    return 0;
}