#include <stdio.h>
#include "LePonto.h"

int main(){
	double a = 0, b = 0, x, y, m;

	LePonto(&x, &y);

	a += x;
	b += y;

	LePonto(&x, &y);

	if (x == a) {
		printf("ERROR!\n");
	}else{
		if (x > a && y > b){
			m = (x-a)/(y-b);
			printf("O coeficiente angular dessa reta e %.3lf\n", m);
		}
		if (x > a && y < b){
			m = (x-a)/(b-y);
			printf("O coeficiente angular dessa reta e -%.3lf\n", m);
		}
		if (x < a && y > b){
			m = (a-x)/(y-b);
			printf("O coeficiente angular dessa reta e -%.3lf\n", m);
		}
		if (x < a && y < b){
			m = (a-x)/(b-y);
			printf("O coeficiente angular dessa reta e %.3lf\n", m);
		}
	}
	return 0;
}
