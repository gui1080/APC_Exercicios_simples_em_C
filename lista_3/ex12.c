#include <stdio.h>

int main () {
	int N;

	scanf("%d", &N);
	
	while (N >= 0) {
		if (N%2) {
			printf("%d: impar\n", N);
		} else {
			printf("%d: par\n", N);
		}
		scanf("%d", &N);
	}
	return 0;
}
