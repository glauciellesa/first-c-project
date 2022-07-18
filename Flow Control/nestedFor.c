#include <stdio.h>

int main()
{

    for (char ch = 'A'; ch < 'K'; ch++)
    {
        printf("\n");
        
        for (int i = 0; i < 10; i++)
        {
            printf("%c - %d ", ch, i);
        }
        
    }
    return (0);
}