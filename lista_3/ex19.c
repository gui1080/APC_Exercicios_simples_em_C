#include <stdio.h>

int main() {
	int n, M, m;

	scanf("%d", &n);

	M=n;
	m=n;

	for (int i = 19; i > 0; i--) {
		scanf("%d", &n);
		if (n > M) {
			M = n;
		}
		if (n < m) {
			m = n;
		}
	}
	printf("Menor: %d\nMaior: %d\n", m, M);
	return 0;
}
