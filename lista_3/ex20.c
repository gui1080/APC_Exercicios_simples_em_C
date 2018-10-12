#include <stdio.h>

int main() {
	int n = 1, t, nm = 1, np = 1, tm, tp, p, total = 0;

	scanf("%d", &t);
	
	tm = t;
	tp = t;
	total += t;
	
	while (1) {
		scanf("%d", &t);
		
		if (t != 0) {
			if (t > 0){
				n++;
				total += t;
				
				if (t < tm) {
					tm = t;
					nm = n;
				}

				if (t > tp) {
					tp = t;
					np = n;
				}
			}else{
				p = -t;
				total += (p);

				scanf("%d", &t);
				
				n++;
				total += t;
				
				if ((t+p) < tm) {
					tm = (t+p);
					nm = n;
				}
				if ((t+p) > tp) {
					tp = (t+p);
					np = n;
				}
			}
		}else{
			break;
		}
	}
	printf("Melhor volta: %d - %d seg\n", nm, tm);
	printf("Pior volta: %d - %d seg\n", np, tp);
	printf("Tempo total: %d seg\n", total);
	return 0;
}
