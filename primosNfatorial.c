#include<stdio.h>


int verificaPrimo(long int num)
{
    
	int i;
	int conta=0;
	for(i=1; i<=num; i++) {

        	if(num%i==0)  conta++;
    
	}
	if(conta==2) {
	
   return 1; // retorna um se primo
    
	} else {
    
	   return 0; // retorna zero se não é primo
	}

}



int main() {
   
	long int numeroN, fatorialN;
   
	long int aux, leituraValida=0;
	//leitura do número N
   
	while (leituraValida == 0) {
	
		scanf("%ld", &numeroN);
	
	if (numeroN >= 0) {

			leituraValida=1;

		}
   
	}

   
	for(fatorialN = 1; numeroN > 1; numeroN = numeroN - 1) {
		fatorialN = fatorialN * numeroN;
	}
   
	if (fatorialN==2) {
       
		printf ("NENHUM PRIMO");
   
	} 
	else {
	
       for(aux=0; aux<=fatorialN; aux++) {
	       		if(verificaPrimo(aux)==1) {

                		printf(" %ld ", aux);

               		}

         	}
   
	}
   
	return 0;	

}





