#include <stdio.h>

void call(void); // É importante colocar o prototype no início quando a função é chamada antes de ser declarada.

int main()
{
    puts("I'm main function");
    call();
    puts("Ended the process. Thanks, call()");

    return(0);
}

void call(void)
{
    puts("I'll be called as soon as main() runs.");
}
