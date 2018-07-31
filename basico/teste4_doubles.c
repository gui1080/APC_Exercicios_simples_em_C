#include <stdio.h> 

	int main()
{
	double x, y, z, k;

	scanf("%lf %lf", &x, &y);

	z=x*(y/100);
	k=z+x;

	printf("%.2lf %.2lf\n", z, k);

	return 0;
}

	
