#include <stdio.h>

int main() {
	int n[53], lim, cont=0, i=0;
	double sum=0;
	while (cont<53) {
		scanf("%d", &n[cont]);
		cont++;
	}
	scanf("%d", &lim);
	cont--;
	while (cont>=0) {
		if (n[cont]<=lim) {
			sum+=n[cont];
			i++;
		}
		cont--;
	}
	printf("%.1lf\n", sum/i);
	return 0;
}
