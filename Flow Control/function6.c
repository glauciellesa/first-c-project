#include <stdio.h>
#define MAX 11
void bar(char c, int count);

int main()
{
    for (int i = 1; i < MAX; i++)
    {
        bar('*', i * 2);
    }
        return(0);
}

void bar(char c, int count)
{
    for ( int i = 0; i < count; i++){
        putchar(c);
    }
    putchar('\n');
    
}