#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

//Material de estudo feito com o canal do Youtube C Descomplicado 

struct elemento{
	struct elemento *ant;
	struct aluno dados; //elemento com ponterio pra ponteiro
	struct elemento *prox;
};

typedef struct elemento Elem;  //Elem = struct elemento

Lista* Cria_Lista(void){
	Lista* li = (Lista*) malloc(sizeof(Lista));   //malloc do tipo lista que eh ponteiuro pro elemento, logo o conteudo representa o comeco da lista, e o proximo eh null
	if(li != NULL){
		*li = NULL    //conteudo de LI
	}
	return li;
}


void Libera_Lista(Lista* li){
	if(li != NULL){
		Elem* no;
		while((*li) != NULL){  //enquanto o conteudo for diferente de NULL, ou seja, lista com coisa
			no = *li;   //no recebe conteudo
			*li = (*li)->prox;  //li vai pra frente
			free(no);  //liberamos o ponteiro velho
		}
	free(li);   //libera o comeco da lista
	}

}

int Tamanho_Lista(Lista* li){
	if(li == NULL){
		return 0;
	}

	int cont = 0;
	Elem* no = *li;

	while(no!= NULL){
		cont++;      //aumenta o contador ate chegar no nulo
		no=no->prox;
	}
	return cont;
}

int Lista_Cheia(Lista* li){
	return 0;
}

int Lista_Vazia(LIsta* li){
	if(li == NULL){        //aponta pra NULL
		return 1;
	}

	if(*li == NULL){   //conteudo da lista eh NULL
		return 1;
	}

	return 0;
}

int Insere_Lista_Inicio(Lista* li, struct aluno al){  //lista e o dado pra inserir
	if(li == NULL) return 0;  //lista valida?

	Elem* no = (Elem*) malloc(sizeof(Elem));  //espaco pra novo no

	if(no == NULL) return 0;

	no->dados = al;  //dados do no sao os dados que passamos
	no->prox = (*li);  //novo no passa a apontar pro antigo inicio, agora sendo proximo
	no->ant = NULL;  //ja que eh o primeiro, o anterior eh nulo

	if(*li != NULL){
		(*li)->ant = no;   //se o inicio nao ta vazio, o inio antigo passa a apontar para o novo dado como anterior
	}

	*li = no;  //agora o comeco aponta para o novo no
	return 1;
}

int Insere_Lista_Final(Lista* li, struct aluno al){
	if(li == NULL) return 0;  //lista vazia?
	Elem *no = (Elem*) malloc(sizeof(Elem));   //aloca novo no
	if(no == NULL) return 0;       //
	no->dados = al;   //dados no novo no sao o novo que passo na funcao
	no->prox = NULL;   //ja que ta no final ,o proximo eh nulo

	if((*li) == NULL){      //se a lista ta vazia, so coloca
		no->ant = NULL;
		*li = no;
	{

	else{
		Elem *aux = *li;   //cria um auxiliar pra percorrer a lista
		while(aux->prox != NULL){
			aux=aux->prox;         //percorre ate achar o nulo
		}
		aux->prox = no;      //o proximo do auxiliar eh o novo no
		no->ant = aux;   //o anterior eh o auxiliar, que era o ultimo
	}
	return 1;
}


int Insere_Lista_Ordenada(Lista* li, struct aluno al){
	if(li == NULL) return 0;

	Elem *no = (Elem*) malloc(sizeof(Elem));

	if(no == NULL) return 0;

	no->dados = al;

	if(Lista_Vazia(li)){
		no->prox = NULL;
		no->ant = NULL;
		*li=no;
	}

	else{
		Elem *ante, *atual = *li;
		while(atual != NULL && atual->dados.matricula < al.matricula){
			ante=atual;
			atual=atual->prox;     //acha onde colocar
		}

		if(atual == *li){             //se de qualquer jeito estou no comeco da lista
			no->ant = NULL;  //anterior eh null
			(*li)->ant = no;   //anterior do li atuial vai pro no
			no->prox = (*li);  //proximo do no vira a lista
			*li = no;
		}
		else{
			no->prox = ante->prox;  //proximo do no vira o proximo do anterior (vai pra frente dele)
			no->ant = ante;          //anterior ao no vira o espaco anterior
			ante->prox = no;         //proximo do anterior vira o no
			if(atual != NULL){
				atual->ant=no;
			}
		}
		return 1;
	}
}


int Remove_Lista_Inicio(Lista* li){
	if(li == NULL){
		return 0;
	}

	if((*li) == NULL){
		return 0;
	}

	Elem *no = *li;       //cria o no
	*li = no->prox;   //ponteiro de inicoi aponta pro proximo

	if(no->prox != NULL){        //significa que existia mais de um elemento na lista
		no->prox->ant = NULL;       //o anterior do proximo aponta pro nulo, marcando o novo inicio, ja que o primeiro dfeve apontar pro NULO anteriormente
	}

	free(no);
	return 1;
}


int Remove_lista_Final(Lista* li){

	if(li == NULL) return 0;
	if((*li) == NULL) return 0;

	Elem *no= *li;        //cria no auxiliar

	while(no->prox != NULL){
		no = no->prox;     //acha o ultimo
	}

	if(no->ant == NULL){     //se isso procede, estamos no comeco da lista
		*li = no->prox;  //lista vazia
	}

	else{
		no->ant->prox = NULL;    //o o proximo do anteior eh nulo, marcando o novo final
	}

	free(no);
	return 1;
}


int Remove_Lista(Lista* li, int mat){
	if(li == NULL){
		return 0;
	}

	Elem *no= *li;

	while(no != NULL && no->dados.matricula != mat){
		no = no->prox;                                //caminha na lista pra achar p elemento que queremos
	}

	if(no == NULL){
		return 0;       //se nao achamos, da erro, eh NULL
	}

	if(no->ant == NULL){
		*li = no->prox;        //se o anterior eh nulo, logo estamos no comeco
	}

	else{
		no->ant->prox = no->prox;   //se n estamos no comeco, o proximo do anterior eh o proximo do no que achamos
	}

	if(no->prox != NULL){
		no->prox->ant = no->ant;       //se o proximo nao eh nulo, ou seja, nao estamos no final, o proximo do elemento anterior eh o anterior do no
	}

	free(no);
	return 1;
}

int Consulta_Lista_Posicao(Lista* li, int pos, struct aluno *al){
	if(li == NULL || pos <= 0){
		return 0;
	}

	Elem *no = (*li);  //auxiliar
	int i = 1;   //contador

	while(no != NULL && i < pos){
		no = no->prox;
		i++;
	}

	if(no == NULL){
		return 0;
	}

	else{
		*al = no->dados;       //da os dados para onde a posicao se igualou, de "no"
		printf("\n\nMatricula do aluno da posicao %d: %d \n\n", i, al.matricula);
		return 1;
	}

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Consulta_Lista_Matricula(Lista* li, int mat, struct aluno *al){
	if(li == NULL || mat <= 0){
		return 0;
	}

	Elem *no = *li;  //auxiliar

	while(no != NULL && no->dados.matricula != mat){  //enquanto a mnatricula eh diferente e nao ta no finbal da lista
		no = no->prox;
	}

	if(no == NULL){
		return 0;    //lista vazia ou nao achei o que queria
	}

	else{
		*al = no->dados;         //ponteiro ta onde quero, logo atribuo os dados do no onde estou
		printf("\n\nO aluno com a matricula %d se encontra no numero %d da Lista\n\n", mat, i);
		return 1;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
