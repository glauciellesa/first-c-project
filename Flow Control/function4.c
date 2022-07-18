#include <stdio.h>

void repeat(int count);

int main()
{
    puts("At first the raven was like:");
    repeat(1);
    puts("But then he was all:");
    repeat(3);
    
    return(0);
}

void repeat(int count)
{
    for (int i = 0; i < count; i++)
    {
        puts("Nevermore!");
    }
    
}