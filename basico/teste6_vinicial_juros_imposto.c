#include <stdio.h> 

	int main()
{ 
 	double x, y, z, v_juros, vf, v_imposto; 

	scanf("%lf %lf %lf", &x, &y, &z);

	v_juros=x*(y/100);
	v_imposto=v_juros*(z/100);
	vf=x+(v_juros-v_imposto);

	printf("%.2lf %.2lf\n",v_imposto, vf);
	return 0;
}
	
	

	
