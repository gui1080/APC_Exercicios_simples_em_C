#include <stdio.h>

double x, y;
void LePonto ();
int main ()
{
    double x1, y1, x2, y2, k;
    LePonto();
    x1=x;
    y1=y;
    
    LePonto();
    x2=x;
    y2=y;
   
    k=(y2-y1)/(x2-x1);
   
    if (x1 != x2) {
     printf("Este eh o coeficiente angular entre estes dois pontos: %.3lf\n", k);
    }
    else {
     printf("ERRO\n");
    }
   
    return 0;
   
}

void LePonto () {
   printf("Digite ponto no plano cartesiano\n");
   scanf("%lf %lf", &x, &y); 
}

