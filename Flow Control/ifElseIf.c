#include <stdio.h>

int main()
{
    int a;
    printf("Type an integer: ");
    scanf("%d", &a);

    if(a > 10)
    {
        printf("You typed %d.\n", a);
        printf("%d is greater then 10.\n", a);
    }
    else if (a < 10)
    {
        printf("You typed %d.\n", a);
        printf("%d is less then 10.\n", a);
    }
    else
    {
        printf("You typed %d.\n", a);
        printf("%d is equal to 10.\n", a);
    }
}