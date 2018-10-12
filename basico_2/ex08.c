#include <stdio.h>

int main() {
	double SM, Cr;

	scanf("%lf", &SM);

	if (SM<=500) {
		Cr=0;

	} else if (SM>500 && SM<=1000) {
		Cr=SM*0.3;

	} else if (SM>1000 && SM<=3000) {
		Cr=SM*0.4;

	} else if (SM>3000) {
		Cr=SM*0.5;
	}
	printf("%.2lf\n", Cr);
	return 0;
}
