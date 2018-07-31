#include <stdio.h>
int main () {
    double depositoMensal, lucro, investimento, depositoTotal;
    int mes;
    mes=1;
    lucro=0;
    depositoTotal=0;
    depositoMensal=0;
    investimento=0;
    
    while(mes<=12) {
        scanf("%lf", &depositoMensal);
        depositoTotal=depositoTotal+depositoMensal;
        investimento=investimento+depositoMensal;
         if(investimento<10000) {
              investimento=(investimento*1.0175);
              // printf("%.2lf %.2lf\n", investimento, depositoTotal);
        }
         else {
              investimento=(investimento*1.0225);
         }
         mes++;
    }
    // printf("%.2lf %.2lf\n", investimento, depositoTotal);
    lucro=investimento-depositoTotal;
    printf("%.2lf\n", lucro);
    return 0;
}
