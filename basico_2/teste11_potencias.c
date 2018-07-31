#include <stdio.h>
#include <math.h>

    int main()
{
    double x;
    scanf("%lf", &x);

        if (x<=1)
       printf("1.0\n");

    else if (x>1 && x<=2)
       printf("2.0\n");

    else if (x>2 && x<=3)
       printf("%.1lf\n", pow(x, 2));

    else if (x>3)
       printf("%.1lf\n", pow(x, 3));


  return 0;
}
