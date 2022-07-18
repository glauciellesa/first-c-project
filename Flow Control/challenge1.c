#include <stdio.h>

int main()
{
    int a;
    printf("Type an integer (1, 2, 3): ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Red\n");
        break;
    case 2:
        printf("Green\n");
        break;
    case 3:
        printf("Blue\n");
        break;
    default:
        printf("Invalid input\n");
    }

    return(0);
}
