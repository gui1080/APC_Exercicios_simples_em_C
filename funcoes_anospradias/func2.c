#include <stdio.h>
#include "AnosParaDias.h"

int main(void)
{
	int x, y;

	scanf("%d", &x);

	y=ConverteAnosDias(x);

	printf("%d\n", y);
}
