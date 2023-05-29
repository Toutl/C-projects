#include <stdio.h>
#include <math.h>

// Armstrong Numbers_v2
// By: Ubaldo Neri

int main()
{
    int candidate, x = 0, y, lng = 0;

    // Input
    printf("\n Ingresa un numero entero: ");
    scanf("%d", &candidate);

    // Process
    y = candidate;
    while (y != 0)
    {
        y /= 10;
        lng++;
    }

    y = candidate;
    while (y != 0)
    {
        x += pow(y % 10, lng);
        y /= 10;
    }

    // Checkup & Ouput
    if (x == candidate)
    {
        printf("  - SI es un numero Armstrong\n");
    }
    else
    {
        printf("  - NO es un numero Armstrong\n");
    }
    return 0;
}
