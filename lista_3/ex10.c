#include <stdio.h>

int main () {
	double S = 1, new, sum = 0, newsum = 0;

	while (S > 0) {
		scanf("%lf", &S);
		
		if (S<0) {
			break;
		} else {
			if (S < 500) {
				new = S * 1.15;
				printf("%.2lf ", new);
			} else if (S >= 500 && S < 1000) {
				new = S * 1.10;
				printf("%.2lf ", new);
			} else if (S >= 1000) {
				new = S * 1.05;
				printf("%.2lf ", new);
			}
			sum += S;
			newsum += new;
		}
	}
	printf("\n%.2lf\n", newsum - sum);
	return 0;
}
