#include <stdio.h>
int main () {
	int matriz[7][7];
	int i, j, soma=0;
	int quadrante1=0, quadrante2=0, quadrante3=0, quadrante4=0;
	int acruz=0;

	for(i=0 ; i<7 ; i++){
	 for(j=0 ; j<7 ; j++){
	  scanf("%d", &matriz[i][j]);
  }
 }

	for(i=0 ; i<7 ; i++){
	 for(j=0 ; j<7 ; j++){
	  if((i==3) || (j==3)){
		acruz=acruz+matriz[i][j];
   }
  }
 }

	quadrante1=matriz[0][0]+matriz[0][1]+matriz[0][2]+matriz[1][0]+matriz[1][1]+matriz[1][2]+matriz[2][0]+matriz[2][1]+matriz[2][2];
	quadrante3=matriz[4][0]+matriz[4][1]+matriz[4][2]+matriz[5][0]+matriz[5][1]+matriz[5][2]+matriz[6][0]+matriz[6][1]+matriz[6][2];
	quadrante2=matriz[0][4]+matriz[0][5]+matriz[0][6]+matriz[1][4]+matriz[1][5]+matriz[1][6]+matriz[2][4]+matriz[2][5]+matriz[2][6];
	quadrante4=matriz[4][4]+matriz[4][5]+matriz[4][6]+matriz[5][4]+matriz[5][5]+matriz[5][6]+matriz[6][4]+matriz[6][5]+matriz[6][6];
	
	if(quadrante1>acruz){
	 soma=soma+quadrante1;
	}
	if(quadrante2>acruz){
	 soma=soma+quadrante2;
	}
	if(quadrante3>acruz){
	 soma=soma+quadrante3;
	}
	if(quadrante4>acruz){
	 soma=soma+quadrante4;
	}
	
	printf("%d\n", soma);
	return 0;
}
