#include <stdio.h>

int check (int cont, int i, int* xmaisy) {
	/*Checa todos os valores do array xmaisy[]
	e retorna 1 para os únicos e 0 para repetidos*/

	if (cont == 0) {
		return 1;
	}

	for (i = 0; i < cont; i++) {
		if (xmaisy[cont] == xmaisy[i]) {
			return 0;
			break;
		}else{
			if (i == cont-1) {
				return 1;
				break;
			}
		}
	}
}

int check_x (int cont, int i, int* x) {
	/*Checa todos os valores dentro de x[]
	e retorna 1 para únicos e 0 para repetidos*/

	if (cont == 0) {
		return 1;
	}
	
	for (i = 0; i < cont; i++) {
		if (x[cont] == x[i]) {
			return 0;
			break;
		}else{
			if (i == cont-1) {
				return 1;
				break;
			}
		}
	}
}

int check_y (int cont, int i, int* y) {
	/*Checa todos os valores dentro de y[]
	e retorna 1 para únicos e 0 para repetidos*/

	if (cont == 0) {
		return 1;
	}
	
	for (i = 0; i < cont; i++) {
		if (y[cont] == y[i]) {
			return 0;
			break;
		}else{
			if (i == cont-1) {
				return 1;
				break;
			}
		}
	}
}

int check_xmenosy (int cont, int i, int* x, int* y) {
	/*(Usar dentro de um for (cont=0; cont<tamanho; cont++))
	Checa todos os valores de x[] comparando com os de y[]
	retorna 1 para os não presentes em y, mas presentes em x,
	retorna 0 para os presentes em x e y*/

	for (i = 0; i < 10; i++) {
		if (x[cont] == y[i]) {
			return 0;
			break;
		}else{
			if (i == 10) {
				return 1;
				break;
			}
		}
	} 
}

int check_x_e_y (int cont, int i, int* x, int* y) {
	/*(Usar dentro de um for (cont=0; cont<tamanho; cont++))
	Checa todos os valores de x[] comparando com os de y[]
	retorna 1 para os presentes em x e y, retornando 0 para
	todo o resto*/

	for (i = 0; i < 10; i++) {
		if (x[cont] == y[i]) {
			return 1;
		}else{
			if (i == 10) {
				return 0;
			}
		}
	} 
}

int main() {
	int x[10], y[10], xmaisy[20], i = 0, cont = 0;
	
	/*Leitura dos Arrays*/
	for (cont = 0; cont < 10; cont++) {
		scanf("%d", &x[cont]);
	}
	for (cont = 0; cont < 10; cont++) {
		scanf("%d",&y[cont]);
	}
	
	/*Uniao (todos os elementos de X e Y sem repeticao) */
	for (cont = 0; cont < 10; cont++) {
		xmaisy[cont] = x[cont];
		xmaisy[cont+10] = y[cont];
	}
	for (cont = 0; cont < 20; cont++) {
		if (check (cont, i, xmaisy)) {
			printf("%d ", xmaisy[cont]);
		}
	}
	printf("\n");
	
	/*Diferenca (elementos de X que nao estao em Y) */
	for (cont = 0; cont < 10; cont++) {
		if (check_xmenosy (cont, i, x, y) && check_x (cont, i, x)) {
			printf("%d ", x[cont]);
		}
	}
	printf("\n");
	
	/*Intersecao (apenas elementos em X e Y) */
	for (cont = 0; cont < 10; cont++) {
		if (check_x_e_y (cont, i, x, y) && check_x (cont, i, x)) {
			printf("%d ", x[cont]);
		}
	}
	printf("\n");

	return 0;
}
