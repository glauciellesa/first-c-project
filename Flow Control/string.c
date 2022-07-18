#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[32];
    char lastName[32];
    char fullName[64];

    /* Fetch input */
    printf("Type your fisrt name: ");
    fgets(firstName, 32, stdin);
    printf("Tyoe your lastname: ");
    fgets(lastName, 32, stdin);

    /* Work with the strings */
    strcpy(fullName, firstName);
    strcat(fullName, lastName);

    /* Display resykts */
    printf("%s", fullName);
    
    return(0);
}