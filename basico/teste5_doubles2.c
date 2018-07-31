#include <stdio.h> 

	int main()
{
	double x, y, z, k;

	scanf("%lf", &x);

	y=(0.05*x);
	z=(0.07*x);
	k=x+y-z;

	printf("%.2lf\n", k);

	return 0;
}
