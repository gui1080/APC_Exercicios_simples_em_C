#include <stdio.h>

int main() {
	int n, sum = 0;
	double i, medium;

	scanf("%d", &n);

	while (n >= 0) {
		i++;
		sum += n;
		scanf("%d", &n);
	}

	medium = sum/i;

	printf("%d\n", sum);
	printf("%.1lf\n", medium);

	return 0;
}
