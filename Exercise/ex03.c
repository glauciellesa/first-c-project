#include <stdio.h>

int *swap(int a, int b);

int main()
{
    int a = 1;
    int b = 2;
    

    swap(a, b);
    printf("Depois %d %d\n", a, b);

    return 0;
}

int *swap(int a, int b)
{
    int resultado[2];
    int c = b;
    b = a;
    a = c;
    
    return resultado;
    
}