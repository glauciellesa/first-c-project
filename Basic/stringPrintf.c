#include <stdio.h>
#include <string.h>

int main()
{
    char name[15];
    printf("What is your name? ");
    fgets(name, 15, stdin);
    printf("Your name is: %s\n", name);

    return 0;
}