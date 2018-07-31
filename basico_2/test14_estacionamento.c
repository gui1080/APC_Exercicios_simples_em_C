#include <stdio.h> 

int main () {
    int x, y, h1, m1, h2, m2, tperm;
    scanf("%d %d", &x, &y);
    h1=x/100;
    m1=x%100;
    h2=y/100;
    m2=y%100;
    tperm=((h2*60)+m2)-((h1*60)+m1);
   
    
    int val;
    
    if (tperm<=15) {
            val=0;
            printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", h1, m1, h2, m2, tperm, val);
    }
                
    else if ((tperm>15) && (tperm<=60)){
            val=tperm*30;
            printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", h1, m1, h2, m2, tperm, val);
    }
            
    
    else if ((tperm>60) && (tperm<=120)) {
            val=(((tperm-60)*20)+(60*30));
            printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", h1, m1, h2, m2, tperm, val);
            
        }
            
    else if (tperm>120) {
            val=(((tperm-120)*10)+(60*30)+(60*20));
            printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", h1, m1, h2, m2, tperm, val);
        }
    return 0;
 }
    
  