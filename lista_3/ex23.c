#include <stdio.h>

int main(){
	double CP, VD, sumCP = 0, sumVD = 0, diff, P = 0, L = 0;

	for (int i = 6; i > 0; i--) {
		scanf("%lf %lf", &CP, &VD);

		diff = VD - CP;
		sumCP += CP;
		sumVD += VD;

		if (diff > 0) {
			L++;
		} else if (diff < 0) {
			P++;
		}
	}
	printf("%.2lf %.0lf %.0lf", (sumCP/sumVD)*100, P, L);
	return 0;
}
