struct conteudo{             //aluno vira conteudo, matricula vira numeral
	int numeral;
};

typedef struct elemento* Lista;


typedef struct elemento Elem;


struct elemento{
	struct conteudo dados;
	struct elemento *prox;
};


Lista* Cria_Lista(void);

void Libera_Lista(Lista* li);

int Tamanho_Lista(Lista* li);

int Lista_Cheia(Lista* li);

int Lista_Vazia(Lista* li);


int Insere_Lista_Inicio(Lista* li, struct conteudo al);

int Insere_Lista_Final(Lista* li, struct conteudo al);

int Insere_Lista_Ordenada(Lista* li, struct conteudo al);


int Remove_Lista_Inicio(Lista* li);

int Remove_Lista_Final(Lista* li);

int Remove_Lista(Lista* li, int mat);


int Consulta_Lista_Posicao(Lista* li, int pos, struct conteudo *al);

int Consulta_Lista_Numeral(Lista* li, int mat, struct conteudo *al);
 
