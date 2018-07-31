#include <stdio.h>
#include <math.h>
#define NUM 3
struct Torres{
double CoordenadaX;
double CoordenadaY;
};


int main() {
double TelefoneX, TelefoneY;
struct Torres un[NUM];
double distancias[NUM], raio[NUM];
int i;
int checar;

checar=0;
scanf("%lf", &TelefoneX);      //ler posicao do telefone
scanf("%lf", &TelefoneY);

for(i=0; i<NUM; i++){
	scanf("%lf", &un[i].CoordenadaX);
	scanf("%lf", &un[i].CoordenadaY);  //ler torres
	scanf("%lf", &raio[i]);
}
for(i=0; i<NUM; i++){
distancias[i]=sqrt(((un[i].CoordenadaX-TelefoneX)*(un[i].CoordenadaX-TelefoneX))+((un[i].CoordenadaY-TelefoneY)*(un[i].CoordenadaY-TelefoneY)));
}

if((distancias[0]<=raio[0]) && (distancias[1]<=raio[1]) && (distancias[2]<=raio[2])){
	checar=1;
}

if(checar==1){
	printf("Celular Encontrado\n");
}
else{
	printf("Nao foi possivel encontrar\n");
}

	return 0;
}