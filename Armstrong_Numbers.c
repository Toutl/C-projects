#include <stdio.h>
#include <math.h>

// Armstrong Numbers_v3
// By: Ubaldo Neri

// An Armstrong Number is a number that is the sum of its own digits each raised to the power of the number of digits.

int main()
{
    int Candidate, tempVar, digitCount, processResult = 0;

    printf("\n Enter a Whole number: ");
    scanf("%d", &Candidate);

    digitCount = log10(Candidate) + 1;

    tempVar = Candidate;
    while (tempVar != 0)
    {
        processResult += pow(tempVar % 10, digitCount);
        tempVar /= 10;
    }

    if (Candidate < 0)
    {
        printf("  - Error!\n");
    }
    else if (processResult == Candidate)
    {
        printf("  - '%d' is an Armstrong Number\n", Candidate);
    }
    else
    {
        printf("  - '%d' is not an Armstrong Number\n", Candidate);
    }
    return 0;
}
