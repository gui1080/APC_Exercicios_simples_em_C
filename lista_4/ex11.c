#include <stdio.h>

int check (int cont, int i, int* n) {
	if (cont == 0) {
		return 1;
	}
	
	for (i = 0; i < cont; i++) {
		if (n[cont] == n[i]) {
			return 0;
			break;
		}else{
			if (i == cont-1) {
				return 1;
				break;
			}
		}
	}
}

int main() {
	int n[500], cont, i = 0;
	
	for (cont = 0; cont < 500; cont++) {
		scanf("%d", &n[cont]);
	}
	
	for (cont = 0; cont < 500; cont++) {
		if (check(cont, i, n)) {
			printf("%d ", n[cont]);
		}
	}
	
	printf("\n");
	return 0;
}
