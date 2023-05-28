#include <stdio.h>
#include <string.h>

// Armstrong Numbers
// By: Ubaldo Neri

int power(int num, int larg);

int main()
{
  char giv[20];
  printf("\n Ingresa un numero entero: ");
  scanf("%s", giv);
  int larg = strlen(giv);
  int real = 0;
  int resul = 0;
  for (int s = 0; s < (larg); s++)
  {
    char dig = giv[s];
    int num = (int)(dig)-48;
    real = power(num, larg);
    resul += real;
  }
  if (resul == atoi(giv))
    printf("\n - Es un numero Armstrong\n");
  else
    printf("\n - No es un numero Armstrong\n");
  return 0;
}

int power(int num, int larg)
{
  int rea = 1;
  for (int i = 0; i < larg; ++i)
  {
    rea *= num;
  }
  return rea;
}