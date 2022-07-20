#include <stdio.h>

int main()
{
    char a, b, c;
    char *p; //Declaring a pointer variable 

    a = 'A'; // Assign 'A' to variable 'a'
    p = &a; // set pointer 'p' to the address of variable 'a'
    b = *p; //*p assine variable b to tje value addressed by  pointer 'p'
    p = &c; // set pointer 'p' to the address of variable c
    *p = 'Z'; //  assign the value addressed by pointer p to 'Z'

    printf("a: %c, b: %c, c: %c \n", a, b, c);
    return(0);
}