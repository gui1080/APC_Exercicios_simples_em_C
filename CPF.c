#include <stdio.h>
int main () {
    int CPF[11];
    int n1, n2, i, j, aux1, aux2;
    int digitoverificador1, digitoverificador2;
    digitoverificador1=0;
    digitoverificador2=0;
    n1=0;
    n2=0;
    aux1=0;
    aux2=0;
    
    printf("Escreva seu CPF com todos os algorismos separados por 1 espaço, sem ponto ou barra\n"); 
    
    for(i=0; i<11; i++){
        scanf("%d", &CPF[i]);
    }
    
    j=10;
    
    for(i=0; i<9; i++){
        n1=n1+ CPF[i]*j;    
        j--;
    }
    aux1= n1%11;
    if((aux1==0) || (aux1==1)){
        digitoverificador1=0;
    }
    else{
        digitoverificador1=(11-aux1);
    }
    
    j=11;
    for(i=0; i<10; i++){
        n2=n2+ CPF[i]*j;  
        j--;
    }
    aux2=n2%11;
    if((aux2==0) || (aux2==1)){
        digitoverificador2=0;
    }
    else{
        digitoverificador2=(11-aux2);
    }
    
    if((CPF[9]==digitoverificador1) && (CPF[10]==digitoverificador2)){
        printf("CPF valido\n");        
    }
    else{
        printf("CPF invalido\nO correto seria:\n");
        for(i=0; i<9; i++){
            printf("%d ", CPF[i]);
        }
        printf("%d %d", digitoverificador1, digitoverificador2);
    }
    
    return 0;
}