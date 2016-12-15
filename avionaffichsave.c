#include <stdlib.h>
#include <stdio.h>
#include <time.h>


	//Affichage de l'avion.

int afficherAvion(int affichage) {

	//Appel la fonction pour afficher l'avion.
	system("clear");
	
	char testet[4] = "heu";

	//Permet de deplacer le curseur avec x et y comme valeurs.
	printf("\033[%d;%dH", vary, varx); 
	printf("=== \n");
	
	printf("\033[%d;%dH", vary + 1 , varx); 
	printf("=======\n");
	
	printf("\033[%d;%dH", vary + 2 , varx); 
	printf("=== \n");


	return 0;

}
#
