#include <stdio.h>
int main () {
 int matriz [7][9];
 int matrizaux[9][7];
 int i, j;

	for(i=0 ; i<7 ; i++){
	  for(j=0 ; j<9 ; j++) {
	     scanf("%d", &matriz[i][j]);
		matrizaux[j][i]=matriz[i][j];
  }
}

	for(i=0; i<9 ; i++){
	  for(j=0 ; j<7 ; j++){
		printf("%d ", matrizaux[i][j]);
  }
	printf("\n");
}


return 0;
}
