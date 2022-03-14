#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista {
	char name[30];
	struct lista *prox;
};

struct livro *aloca () {
	return malloc (sizeof (struct lista));
}

void addItem (struct lista *cabeca) {
	struct lista *aux, *novo;
	
	aux = cabeca;
	
	while ( aux->prox != NULL) {
		aux = aux->prox;
	}
	
	novo = aloca ();
	
	printf ("Digite o nome: ");
	gets (novo->name);
	novo->prox = NULL;
	
	aux->prox = novo;	
	
	
}	

int main () {
	struct lista acervo;
	acervo.prox = NULL;
	
	addItem (&acervo);
	addItem (&acervo);
	printf("%s\n", acervo.prox->name);
	printf("%s\n", acervo.prox->prox->nasme);
	
	
	
}
	
