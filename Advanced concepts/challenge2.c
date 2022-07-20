#include <stdio.h>
#include <stdlib.h>
#define SIZE 64

int main()
{
    char *name;

    name = malloc(sizeof(char) * SIZE);
    if (name == NULL)
    {
        puts("Unable to allocate memory");
        return (1);
    }

    printf("Type your name: ");
    fgets(name, 32, stdin);
    printf("Hello, %s \n", name);
    printf("%d",'a');
    return (0);
}

