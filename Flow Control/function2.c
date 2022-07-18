#include <stdio.h>

// if function is declarede in the beginning prototype isn't necessary

void call()
{
    printf("Soup!");
}

int main()
{
    printf("\nFor breakfast I had ");
    call();
    printf("\n");
    printf("For lunch I had ");
    call();
    printf("\n");
    printf("For dinner I had ");
    call();
    printf(" \n \n");

    return(0);
}