#include <stdio.h>
#include <math.h>

int main()
{
    float number1,number2;

    printf("Type a value for number 1: ");
    scanf("%f", &number1);
    printf("Type a value for number 2: ");
    scanf("%f",&number2);

    printf("Case1: %f - %f = %f\n", number1, number2, number1-number2); 
    printf("Case2: %f + %f = %f\n", number1, number2, number1+number2);
    printf("Case3: %f * %f = %f\n", number1, number2, number1*number2); 
    printf("Case4: %f / %f = %f\n", number1, number2, number1/number2);
    printf("Case5: %f to the %f power = %f\n", number1, number2, pow(number1,number2)); 
    printf("Case6: The square root of %f is %f\n", number1, sqrt(number1));
    printf("Case7: The square root of %f is %f\n", number2, sqrt(number2));

    return(0);
}
