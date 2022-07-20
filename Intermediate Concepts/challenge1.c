#include <stdio.h>

int main()
{
    char name[5][9] = {
        "Ant",
        "Bee",
        "Cat",
        "Duck",
        "Elephant"
    };
   
    for(int x = 0; x < 5; x++){
        printf("%s\n", name[x]);
    }
    return(0);
}