#include <stdio.h>

int main() {
	int n[135], cont, lim, LIM;
	for (cont = 0; cont < 135; cont++) {
		scanf("%d", &n[cont]);
	}

	scanf("%d %d", &lim, &LIM);
	
	cont=0;
	
	while (cont < 135) {
		if (n[cont] < lim || n[cont] > LIM) {
			printf("%d ", n[cont]);
		}
		cont++;
	}
	printf("\n");
	return 0;
}
