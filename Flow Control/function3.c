#include <stdio.h>

void huzzah(void);

int main()
{
    puts("Everyone gets free dinner!");
    huzzah();
    puts("Everyone gets free dessert!");
    huzzah();

    return(0);
}

void huzzah(void)
{
    for (int i = 0; i < 3; i++)
    {
        puts("Huzzah! ");
    }
    putchar('\n');
    
}