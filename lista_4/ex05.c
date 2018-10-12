#include <stdio.h>

int main() {
	int n[106], lim, cont = 0, sum = 0;
	while(cont < 106) {
		scanf("%d", &n[cont]);
		
		if (n[cont] == 0) {
			break;
		}
		cont++;
	}

	scanf("%d", &lim);
	
	while (cont >= 0) {
		if (n[cont] <= lim) {
			sum+=n[cont];
		}
		cont--;
	}
	printf("%d\n", sum);
	return 0;
}
