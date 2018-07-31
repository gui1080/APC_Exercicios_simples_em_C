#include <stdio.h>
  int main() {
	  int x;
	  scanf("%i", &x);
	  if ((x % 3 == 0) && (x % 7 == 0))
	  {
      printf("MULTIPLO\n");
	  }
	  
	  else { 
     printf("NAO E MULTIPLO\n");
	  }
	    return 0;
  }
	    