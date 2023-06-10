#include <stdio.h>
#include <math.h>

// Armstrong Numbers_v3
// By: Ubaldo Neri

// Definition: An Armstrong Number is a number that is the sum of its own digits each raised to the power of the number of digits.

int main()
{
    int number, originalNumber, digitCount, sum = 0;

    printf("\n Enter a Whole number: ");
    scanf("%d", &number);

    digitCount = log10(number) + 1;
    originalNumber = number;

    while (originalNumber != 0)
    {
        sum += pow(originalNumber % 10, digitCount);
        originalNumber /= 10;
    }

    if (number < 0)
    {
        printf("  - Error!\n");
    }
    else if (sum == number)
    {
        printf("  - '%d' is an Armstrong Number\n", number);
    }
    else
    {
        printf("  - '%d' is not an Armstrong Number\n", number);
    }
    
    return 0;
}
