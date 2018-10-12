#include <stdio.h>

int main() {
	int n[87], lim, cont = 0, i;
	
	while (cont<87) {
		scanf("%d", &n[cont]);
		
		cont++;
		
		if (n[cont-1] == 0) {
			break;
		}
	}
	
	scanf("%d", &lim);
	
	i = cont-2;
	cont = 0;

	while (i >= 0) {
		if (n[cont] > lim) {
			printf("%d ", n[cont]);
		}
		
		i--;
		cont++;
	}
	printf("\n");
	return 0;
}
