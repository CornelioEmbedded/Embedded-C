#include <stdio.h>

int main()
{
    char variable_1 = 'A';
    char variable_2 = 'B';

    printf("Address of variable 1: %p\n", &variable_1);
    printf("Address of variable 2: %p", &variable_2);

    return 0;
}