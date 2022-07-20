/* 01)​ Crie uma função que dado dois valores (passados como parâmetros) mostre no console a soma, subtração,
multiplicação e divisão desses valores.*/

#include <stdio.h>
void loadData(int *number1, int *number2);
void calculate(int number1, int number2);

int main()
{

    int number1, number2; 
    number1 = 0;
    number2 = 0;
    loadData(&number1, &number2);
    calculate(number1, number2);
    
    return(0);
}

void loadData(int *number1, int *number2)
{
    printf("Type number1: ");
    scanf("%d", number1);
    printf("Type number2: ");
    scanf("%d", number2);
}

void calculate(int number1, int number2)
{
    printf("%d + %d = %d \n", number1, number2, number1 + number2);
    printf("%d - %d = %d \n", number1, number2, number1 - number2);
    printf("%d * %d = %d \n", number1, number2, number1 * number2);
    printf("%d / %d = %d \n", number1, number2, number1 / number2);

}