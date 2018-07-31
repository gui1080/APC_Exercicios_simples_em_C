#include <stdio.h>
#include "SinalNumero.h"
int main(void)
{
    int x, y;
    scanf("%d", &x);
    y=Sinal(x);
    if(!y)
	printf("Zero\n");
    else if(y<0)
	printf("NUMERO NEGATIVO\n");
	else
	printf("NUMERO POSITIVO\n");
    
    
}
