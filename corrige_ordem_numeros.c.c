#include<stdio.h>
int conferir_contagem(int *mao){
        int k, j, aux, vetor[5], n;
        n=0;
        
    for(k=0; k<5; k++){
        vetor[k]=mao[k];
    }
    
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (mao[j] > mao[j + 1]) {
                aux          = vetor[j];       //bubblesort
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    
    for(k=0; k<5; k++){
        if(vetor[k]!=mao[k]){
         n++;
         break;
        }
    }
         if(n==0){
             return 0;
}
         else{
             return 1;
         }
}

void corrigir_contagem(int *mao){
    
    int k, j, aux;
    for (k = 1; k < 5; k++) {
        for (j = 0; j < 4; j++) {
            if (mao[j] > mao[j + 1]) {
                aux          = mao[j];       //bubblesort
                mao[j]     = mao[j + 1];
                mao[j + 1] = aux;
            }
        }
    }
    
}
    
int main(){
    int i, mao[5];
    for(i=0; i<5; ++i)
        scanf("%d", &mao[i]);

    if(conferir_contagem(mao))printf("Contagem Correta\n");
    else{
        printf("Contagem Incorreta\n");
        printf("Sequencia certa: ");
        corrigir_contagem(mao);
        for(i=0; i<5; ++i)
            printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
    }

 return 0;
}