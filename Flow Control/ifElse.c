#include <stdio.h>

int main()
{
    int number;
    printf("Type an integer: ");
    scanf("%d", &number);
    if(number > 10)
    {
        printf("You typed %d.\n", number);
        printf("%d is greater than 10.\n", number);
    }
    else
    {
        printf("You typed %d.\n", number);
        printf("%d is less or equal to 10.\n", number);
    }
   
    return(0);
}