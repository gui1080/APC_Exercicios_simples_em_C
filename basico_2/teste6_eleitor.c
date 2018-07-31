#include <stdio.h>
    int main()
    {
        int x;
        scanf("%i", &x);
    if (x<16)
    {
        printf("NAO ELEITOR\n");
    }
    else if ((x>=18) && (x<65))
      { 
        printf("OBRIGATORIO\n");
      }
    else 
      {
        printf("FACULTATIVO\n");
      }
    return 0;
    }
