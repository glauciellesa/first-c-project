#include <stdio.h>
/*
int main()
{
    int c;

    printf("Type a letter: ");
    c = getchar();
    printf("You typed '%c'.\n" , c);

    return(0);
}
*/
int main()
{
    int c;
    
    printf("Type a letter: ");
    c = getchar();
    printf("You typed '");
    putchar(c);
    printf("' .\n");

    return(0);
}