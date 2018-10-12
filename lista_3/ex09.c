#include <stdio.h>

int main () {
	int Q; 
	double PR, total = 0;

	while (Q > 0) {
		scanf("%d", &Q);

		if(Q > 0) {
			do {
				scanf("%lf", &PR);
			} while(PR < 0);
			
			total += Q * PR;
		}
	}

	printf("%.2lf\n", total);
	return 0;
}
