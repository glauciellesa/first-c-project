#include <stdio.h>
/* Take two age variables as input and compared those for age comparison.*/

int main()
{
    int age1, age2;

    printf("Type an age: ");
    scanf("%d", &age1);
    printf("Type an new age: ");
    scanf("%d", &age2);

    if(age1 > age2) 
    {
        printf("Age1 is greater than age2\n");
    }
    else{
        printf("Age2 is greater than age1.\n");
    }
    return(0);
}
