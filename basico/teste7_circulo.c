#include <stdio.h>
 int main()
 { 
	double x, y, z;

	scanf("%lf %lf", &x, &y);
	z=3.1416*(y*y)*x;

	printf("%.1lf\n", z);
	return 0;
}	
