#include <stdio.h>

int evaluate();

int main() 
{
    int number;

    printf("Type a value: ");
    scanf("%d", &number);
    evaluate(number);
    return(0);
}

int evaluate(int number)
{
    if (number > 10)
    {
        printf("The number typed is greater than 10. \n");
    }
    else if(number < 10)
    {
        printf("The number typed is less than 10.\n");
    }
    else
    {
        printf("The number typed is equal to 10.\n");
    }
    
}