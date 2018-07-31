#include <stdio.h>
  int main() {
	  int n1, n2, m;
	  scanf("%i %i", &n1, &n2);
	  m=(n1+n2)/2;
	  
	  if (m>=7)
	  {
         printf("APROVADO\n");
	  }	  
	  else 
		  if ((m>=3) && (m<7)) { 
			  printf("EXAME\n"); 
		  }
	      else
		  {
			  printf("REPROVADO\n");
		  }

	  return 0;
  }
	    