#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
	unsigned int eta;
	char classe[MAX_STRLEN+1];
};
typedef struct s_studente studente;

void ordina (studente studenti[],int dimensione);

int main(int argc, char** argv) {
    int i;
    studente studenti[N];

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
    
    ordina(studenti,N);
    for (i=0;i<N;i++) {
		printf("%s; %s; %d; %s\n", studenti[i].nome, studenti[i].cognome, studenti[i].eta, studenti[i].classe);
	}
    return (EXIT_SUCCESS);
}

void ordina(studente lista[],int dimensione) {
    int i,j;
    studente scambia;
    int min;
    
    for (i=0;i<dimensione;i++) {
        min=i;
        for (j=i+1; j<dimensione;j++){
            if (strcmp(lista[j].cognome,lista[min].cognome)<0) {
                min=j;
            }
        }
        if (min!=i) {
            scambia=lista[i];
            lista[i]=lista[min];
            lista[min]=scambia;
        }  
    }
}