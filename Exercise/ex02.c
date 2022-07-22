/*Os triângulos podem ser classificados em 3 tipos quanto ao tamanho de seus lados:
Equilátero: Os três lados são iguais. Isósceles: Dois lados iguais. Escaleno: Todos 
os lados são diferentes. Crie uma função que recebe os comprimentos dos três lados 
de um triângulo e retorne sua classificação quanto ao tamanho de seus lados. 
(Neste exemplo deve-se abstrair as condições matemáticas de existência de um triângulo). */
#include <stdio.h>

void inputValue(int *side1, int *side2, int *side3);
void classifyTriangle(int side1, int side2, int side3);

int main()
{
    int side1 = 0;
    int side2 = 0; 
    int side3 = 0;
    printf("%d %d %d \n", side1, side2, side3);
    inputValue(&side1, &side2, &side3); // set pointer 'p' to the address of variable 'a'
    printf("%d %d %d \n", side1, side2, side3);
    classifyTriangle(side1, side2, side3);

    
    return(0);
}

void inputValue(int *pside1, int *side2, int *side3) ////Declaring a pointer variable ATENÇÃO!! prototype tem que ser igual
{
    printf("Type three numbers, separeted by spaces: ");
    scanf("%d %d %d", side1, side2, side3);
    printf("%d %d %d\n", *side1, *side2, *side3);
}

void classifyTriangle(int side1, int side2, int side3)
{
    if(side1 == side2 && side2 == side3)
    {
        printf("Equilátero\n");
    }
    else if(side1 == side2 || side2 == side3)
    {
        printf("Isósceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }
    
}
