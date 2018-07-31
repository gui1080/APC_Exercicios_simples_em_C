struct aluno{
	int matricula;
	char nome[30];   //informcao guardada 
	float n1, n2, n3;
};

typedef struct elemento* Lista;   //ponteiro de elemento tipo elemento chamado lista




Lista* Cria_Lista(void);

void Libera_Lista(Lista* li);

int Tamanho_Lista(Lista* li);

int Lista_Cheia(Lista* li);

int Lista_Vazia(LIsta* li);


int Insere_Lista_Inicio(Lista* li, struct aluno al);

int Insere_Lista_Final(Lista* li, struct aluno al);

int Insere_Lista_Ordenada(Lista* li, struct aluno al);


int Remove_Lista_Inicio(Lista* li);

int Remove_lista_Final(Lista* li);

int Remove_Lista(Lista* li, int mat);
