#include <stdio.h>

int main() {
	double C;
	int i, F1, F2;

	scanf("%d %d", &F1, &F2);
	i = F2 - F1;

	while (i >= 0) {
		C = (F2 - i - 32) * (5 / 9.0);
		printf("%d F : %.1lf C\n", F2-i, C);
		i--;
	}
	return 0;
}
