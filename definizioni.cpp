#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototipi.h"

void caricaM(int matrice[][5], int righe, int colonne) {
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			matrice[i][j] = rand() % 10;
		}
	}
}

void visualizzaM(int matrice[][5], int righe, int colonne)
{
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}
}

void scriviM(int matrice[][5], int righe, int colonne) {
	FILE* fp;
	fp = fopen("testo.txt", "w");
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			fprintf(fp, "%d ", matrice[i][j]);
			
		}
		
		fprintf(fp, "\n");//ad ogni riga, vado a capo;
	}
	fclose(fp);
}

int dimFile() {
	int dimensione = 0;
	FILE* fp;
	fp = fopen("testo.txt", "r"); // aprendo in read, il puntatore sarà settato a inizio file;
	fseek(fp, 0, 2); // sposto il puntatore alla fine del file;
	dimensione = ftell(fp); //restituisco la dimensione in byte del file;
	fclose(fp);

	return dimensione;


}

void leggiM(int matrice[][5], int righe, int colonne) {
	FILE* fp;
	fp = fopen("testo.txt", "r");
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			fscanf(fp, "%d", &matrice[i][j]);
		}
	}
	fclose(fp);
}