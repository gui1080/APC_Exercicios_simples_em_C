#include <stdio.h>
#include <math.h>

double Calc_Bhaskara();

int main ()
{
    double a, b, c;
    double x1, x2, delta;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    Calc_Bhaskara(a, b, c, &x1, &x2, &delta);
        if(delta<0) {
            printf("Nao existem raizes reais\n");
        }
        else if (delta==0) {
            printf("Numero de Raizes: 1\nRaiz: %.3lf\n", x1);
        }
        else {
            printf("Numero de Raizes: 2\nRaizes: %.3lf %.3lf\n",x1, x2);
            }
    return 0;
}

double Calc_Bhaskara (double a, double b, double c, double *x1, double *x2, double *delta) {
    *delta = ((b*b)-(4*a*c));
    if(*delta>=0) {
    *x1 = (((-1)*(b))+ (sqrt(*delta)))/(2*a);
    *x2 = (((-1)*(b))- (sqrt(*delta)))/(2*a);
     } 
}
