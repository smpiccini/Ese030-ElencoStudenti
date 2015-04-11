#include <stdio.h>
#include <stdlib.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
	unsigned int eta;
	char classe[MAX_STRLEN+1];
}studenti[N];

int main(int argc, char** argv) {
	int i;
	for (i=0;i<N;i++) {
		
		printf("Studente %d:\n", i+1);
		printf("Nome: ");
		scanf("%s", studenti[i].nome);
		printf("Cognome: ");
		scanf("%s", studenti[i].cognome);
		printf("eta': ");
		scanf("%d", &studenti[i].eta);
		printf("Classe: ");
		scanf("%s", studenti[i].classe);
	}
    
	for (i=0;i<N;i++) {
		printf("%s; %s; %d; %s\n", studenti[i].nome, studenti[i].cognome, studenti[i].eta, studenti[i].classe);
	}
    return (EXIT_SUCCESS);
}
