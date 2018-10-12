#include <stdio.h>
#include <math.h>

int main() {
	int n[28], cont = 0, sum = 0;
	double avg, varsum = 0, var, dv;
	
	while (cont < 28){
		scanf("%d", &n[cont]);
		sum += n[cont];
		cont++;
	}
	
	avg = (double)sum/28.0;
	cont--;
	printf("%d %d %.3lf\n", cont, sum, avg);
	
	while (cont >= 0) {
		printf("%.3lf\n", varsum);
		
		dv = (n[cont]-avg) * (n[cont]-avg);
		
		printf("%.3lf\n", dv);
		
		varsum += dv;
		cont--;
	}
	
	printf("%d\n", cont);
	
	var=varsum/27;
	
	printf("%.1lf %.1lf\n", var, sqrt(var));
	return 0;
}
