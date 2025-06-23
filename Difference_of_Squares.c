#include <stdio.h>

// Difference of Squares_v3
// By: Ubaldo Neri

/*
  Instruction:
  Find the difference between the square of the sum
  and the sum of the squares of the first N natural numbers.
*/

unsigned int sum_of_squares(unsigned int number);
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

int
main(void)
{
  int number, difference;

  printf("\n Enter a whole numer: ");
  scanf("%d", &number);

  difference = difference_of_squares(number);

  printf(" The difference of squares is %d\n\n", difference);

  return 0;
}

unsigned int
sum_of_squares(unsigned int number)
{
  return number * (number + 1) * (2 * number + 1) / 6;
}

unsigned int
square_of_sum(unsigned int number)
{
  unsigned int sum = (number + 1) * number / 2;
  return sum * sum;
}

unsigned int
difference_of_squares(unsigned int number)
{
  return square_of_sum(number) - sum_of_squares(number);
}

