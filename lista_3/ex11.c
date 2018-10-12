#include <stdio.h>

int main() {
	int T, N, maior = 0, menor = 0;

	scanf("%d %d", &T, &N);
	maior=N;
	menor=N;
	
	for (int i = T-1; i > 0; i--) {
		scanf("%d", &N);
		if (N > maior) {
			maior = N;

		} else if (N < menor) {
			menor = N;
		
		}
	}
	printf("Menor: %d\nMaior: %d\n", menor, maior);
	return 0;
}
