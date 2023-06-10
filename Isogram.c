#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Isogram
// By: Ubaldo Neri

int main(){
	char giv[30];
	printf("\nIngresa una palabra: ");
	scanf("%s", giv);
	int larg = strlen(giv);
	int fin = 0;
  for (int let = 0; let < (larg); let++) {
  	for (int otr = 0; otr < (larg); otr++) {
	  if (giv[let] == giv[otr] || giv[let] == giv[otr]+32 && giv[otr] != '-' && giv[otr] != ' ')
		if (let != otr)
		  fin = 1;
		else
		  continue;
	  else
		continue;
	}
  }
  switch (fin){
  case 0:
	printf("\nSI es un isograma");
	break;
  case 1:
	printf("\nNO es un isograma\n");
	break;
  default:
	break;
  }
  return 0;
}