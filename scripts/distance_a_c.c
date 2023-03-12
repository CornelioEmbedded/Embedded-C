#include <stdio.h>

int main()
{
    unsigned char distance_a_b, distance_b_c, distance_a_c;

    distance_a_b = 160;
    distance_b_c = 40;

    distance_a_c = distance_a_b + distance_b_c;

    printf("La distancia del punto A al C es %d Km", distance_a_c);

    return 0;
}