#include <stdio.h>

void print_hello(int);
int get_data_from_function(int);

int main()
{
    int tiempo = 5;
    int data;
    data = get_data_from_function(tiempo);
    printf("Dato de entrada: %i\n", tiempo);
    printf("Dato de salida: %i", data);

    return 0;
}


void print_hello(int times)
{
    for(int i = 0; i<=times; i++)
    {
        printf("Hello %i\n", i);
    }
}

int get_data_from_function(int enter_data)
{
    int suma;
    suma = enter_data + 90;
    return suma;
}