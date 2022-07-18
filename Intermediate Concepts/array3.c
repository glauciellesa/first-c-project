#include <stdio.h>

#define MEALS 3

int main()
{
    int accumulator = 0; 
    puts("Calorie Counter");

    for(int i = 0; i < MEALS; i++)
    {
        int calorie;
        printf("Calories at meal %d: ",i+1);
        scanf("%d", &calorie);
        accumulator += calorie;
    }
    printf("You had a total of %d calories.\n", accumulator);
    

    return(0);
}