#include <stdio.h>
    int main()
    {
        float p, a, r;
        scanf("%f %f", &p, &a);
        r=p/(a*a);
    if(r<20) {
        printf("ABAIXO\n");
    }
      else if((r>=20) && (r<25)) {
          printf("NORMAL\n");
      }
      else if((r>=25) && (r<30)) {
          printf("SOBREPESO\n");
      }
      else if((r>=30) && (r<40)) {
          printf("OBESO\n");
      }
      else if(r>=40) {
          printf("MORBIDO\n");
      }
 return 0;
    }
      
