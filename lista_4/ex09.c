#include <stdio.h>
#include <math.h>

int main() {
	int n[121], cont = 0, sum = 0;
	double avg, res;
	
	while (cont < 121) {
		scanf("%d", &n[cont]);
		sum += n[cont];
		cont++;
	}
	
	avg = sum/121.0;
	cont = 0;
	
	while (cont < 121) {
		res = pow((n[cont]-avg), 2);
		printf("%.1lf ", res);
		cont++;
	}
	
	printf("\n");
	return 0;
}
