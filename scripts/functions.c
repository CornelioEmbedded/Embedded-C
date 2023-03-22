#include <stdio.h>

void myFunction(void);


int main()
{

    myFunction();
    myFunction();

    return 0;
}

void myFunction(void)
{
    static int count = 0;
    count ++;
    printf("La funcion se ejecuta : %d\n", count);
}