#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Lista* Cria_Lista(void){

	Lista* li= (Lista*) malloc(sizeof(Lista));   //aloca espaco suficiente para a lista li, do tipo ponteiro para ponteiro Lista
	if(li != NULL){
		*li = NULL;    
	return li;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Libera_Lista(Lista* li){
	if(li != NULL){   //se a lista eh valida, primeiro != NULL
		Elem* no;   //ponteiro elemento de "noh"
		while((*li) != NULL){   //enquanto a lista nao ta vazia
		no = *li;               //no recebe o elemento em questao
		*li = (*li) -> prox;    //inicio da lista aponta pra proximo elemento 
		free(no);		    //o antigo "li" eh liberado, o auxiliar de "no"
		}
		
		free(li);  //libera o no especial do inicio
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Tamanho_Lista(Lista* li){
	if(li == NULL) return 0;

	int cont = 0;  //contador
	Elem* no = *li;  //noh auxiliar com primeiro elemento
	while (no != NULL){   //caminha no por no, aumentando o contador
		cont++;
		no = no->prox;
	}
	return cont; //retorna contador, se caminhar com a cabeca da lista ela vai mudar de comeco, por isso o auxiliar contador 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Lista_Cheia(Lista* li){
	return 0;
}    //lista cheia nao eh exatamente um conceito valido com alocacao dinamica, so ta cheia se acaba a memoria do PC

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Lista_Vazia(Lista* li){
	if(li == NULL){        //lista nula
		return 1;
	}
	
	if(*li == NULL){       //inicio da lista aponta para NULL
		return 1;
	}

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Insere_Lista_Inicio(Lista* li, struct conteudo al){  //essa struct eh o que vai entrar
	if(li == NULL) return 0;            //lista valida?

	Elem *no = (Elem*)malloc(sizeof(Elem));   //se sim cria um novo no

	if(no == NULL) return 0;          //aviso que funciona se vc nao consegue alocar a memoria pro novo no

	no->dados = al;    //copia a entrada pro no
	no->prox = (*li);  //joga a lista pro proximno espaco 
	*li = no;   //inicio da lista aponta pro novo no
	return 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Insere_Lista_Final(Lista* li, struct conteudo al){
	if(li == NULL) return 0;

	Elem *no = (Elem*)malloc(sizeof(Elem));

	if(no == NULL) return 0;

	no->dados=al;   //copia pro aux
	no->prox=NULL;  //como vai pro final, proximo eh NULL

	if((*li) == NULL){   //se a lista vazia, vai pro comeco logo
		*li = no;
		}

	else{
		Elem *aux = *li;     //percorre a lista no auxiliar
		while(aux->prox != NULL){
			aux = aux->prox;  //enquanto n for nulo, aux pega o proximo no
			}
		aux->prox = no;   //quando acha, joga pro no o conteudo
		}

	return 1;   //avisa que deu certo
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Insere_Lista_Ordenada(Lista* li, struct conteudo al){
	if(li == NULL) return 0;

	Elem *no = (Elem*) malloc(sizeof(Elem));

	if(no == NULL) return 0;

	no->dados = al;

	if(Lista_Vazia(li)){            //se a lista eh vazia
		no->prox = (*li);
		*li = no;
		return 1;
	}

	else{			//procura onde inserir
		Elem *ant, *atual = *li;      //cria dois auxs

		while(atual != NULL && atual->dados.numeral < al.numeral){   //se atual nao e nulo e o elemento da lista eh menor que o numero que estava na lista, ele acha onde deve colocar o elemento (dado que os elementos da lista estao em ordem crescente), ou vai colocar logo no final mesmo
			ant = atual;
			atual= atual->prox;		
		}
		if(atual == *li){   //atual eh o inicio da lista?
			no->prox = (*li);
			*li = no;
		}
		
		else{                           //bota ou no final ou no meio
			no->prox = ant->prox;  //no prox aponta para onde o anterior estava apontando 
			ant->prox = no;   //coloca o elemento onde deveria
		}
	return 1;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Remove_Lista_Inicio(Lista* li){
	if(li !=NULL){
		return 0;        //lista existe?
	}

	if((*li) == NULL){        //lista vazia?
		return 0;
	}

	Elem *no = *li;    //cria aux que eh igual ao lista
	*li = no->prox;    //inicio aponta pra quem vem depois
	free (no);       //libera o no
	return 1;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Remove_Lista_Final(Lista* li){
	if(li == NULL){
		return 0;
	}

	if((*li) == NULL){
		return 0;
	}

	Elem *ant, *no = *li;

	while(no->prox != NULL){         //percorremos a lista ate o final dela
		ant = no;           //anterior recebe o no
		no = no->prox;     //no recebe o seguinte
	}                            //no final, no aponta pro proximo, que eh nulo

	if(no == (*li)){         //ai no caso seria o primeiro e nao teriamos andado na lista
		*li = no->prox;  //lista so tinha 1 elemento e no->prox eh nulo
	}

	else{
		ant->prox = no->prox;    
	}                                   //anterior aponta pro no, que aponta pra NULL

	free(no);
	return 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Remove_Lista(Lista* li, int mat){
	if(li == NULL){         //lista existe?
		return 0;
	}

	Elem *ant, *no = *li;       //copia da lista em "no", auxiliar anterior

	while(no != NULL && no->dados.numeral != mat){  //percorre tudo, se no nao eh nulo, e se o conteudo do que se ve nao eh igual ao conteudo que se quer remover
		ant = no;
		no = no->prox;
	}
	
	if(no == NULL) {
		return 0;     //se o conteudo estiver vazio, ou seja, nao achou nada
	}

	if(no == *li){          //se o conteudo em qwuestao era o elemento do inicio da lista 
		*li = no->prox;
	}

	else{
		ant->prox = no->prox;   //o proximo do anterior eh igual ao proximo do elemento, ou seja, ele some 
	}

	free(no);
	return 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Consulta_Lista_Posicao(Lista* li, int pos, struct conteudo *al){
	if(li == NULL || pos <= 0){
		return 0;
	}

	Elem *no = (*li);  //auxiliar
	int i = 1;   //contador

	while(no != NULL && i< pos){
		no = no->prox;             //acha a posicao do elemento 
		i++;	
	}

	if(no == NULL){
		return 0;
	}

	else{
		*al = no->dados;       //da os dados para onde a posicao se igualou, de "no"
		return 1;
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Consulta_Lista_Numeral(Lista* li, int mat, struct conteudo *al){
	if(li == NULL || mat <= 0){
		return 0;
	}

	Elem *no = *li;  //auxiliar

	while(no != NULL && no->dados.numeral != mat){  //enquanto a mnatricula eh diferente e nao ta no finbal da lista 
		no = no->prox;	
	}

	if(no == NULL){
		return 0;    //lista vazia ou nao achei o que queria
	}

	else{
		*al = no->dados;         //ponteiro ta onde quero, logo atribuo os dados do no onde estou
		return 1;
	}
}



