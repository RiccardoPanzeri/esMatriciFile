#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototipi.h"


int main() {
	srand(time(0));
	int const righe = 5;
	int const colonne = 5;
	int m[righe][colonne];
	int m1[righe][colonne];
	int dimensioneFile = 0;
	
	//acquisisco la dimensione iniziale del file vuoto per testare la funzione:
	dimensioneFile = dimFile();
	printf("Il file è vuoto, quindi la sua dimensione è: %d\n\n\n", dimensioneFile);
	//carico e visualizzo la matrice iniziale:
	caricaM(m, righe, colonne);
	visualizzaM(m, righe, colonne);
	//scrivo la matrice sul file:
	scriviM(m, righe, colonne);
	//riacquisisco la dimensione del file ora che ci ho scritto sopra la matrice:
	dimensioneFile = dimFile();
	printf("\n\nOra, la dimensione del file è: %d\n\n\n", dimensioneFile); // ora contando 1 byte per ogni char del file, abbiamo: 1 byte per ogni cifra, 1 byte per ogni spazio (uno dopo ogni cifra), un byte per ogni a capo. Il totale è quindi di 12 byte x 5 righe = 60 byte;  
	//ora provo a leggere la matrice dal file e ainserirla in una seconda matrice vuota;
	printf("Visualizzo la matrice letta dal file:\n\n");
	leggiM(m1, righe, colonne);
	visualizzaM(m1, righe, colonne);




	return 0;
}