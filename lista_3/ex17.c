#include <stdio.h>

int main() {
	int l, v, maior;

	scanf("%d %d", &l, &v);
	maior = v;
	
	while (l > 1) {
		scanf("%d", &v);
		
		if (v > maior) {
			maior = v;
		}
		l--;
	}

	if (maior < 10) {
		printf("1\n");

	} else if (maior >= 10 && maior < 20) {
		printf("2\n");

	} else if (maior >= 20) {
		printf("3\n");

	}
	return 0;
}
